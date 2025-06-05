// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1349/problem/A
// AC

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

using ll = long long;
// using ll = int;
using ld = long double;

ll mod = 1000000007;
// ll mod = 998244353;

#define nl "\n"
#define forn(i, s, e) for (ll i = s; i < e; i++)
#define forr(i, s, e) for (ll i = s; i >= e; i--)

// #define DEBUG

#ifdef DEBUG
#define dbg(n) cerr << __LINE__ << " " << #n << " " << n << endl;
#define dbgc(a)                                         \
    cerr << __LINE__ << " " << #a << " " << '[' << " "; \
    for (auto el : a)                                   \
    {                                                   \
        cerr << el << " ";                              \
    }                                                   \
    cerr << ']' << endl;
#define dbgcc(a)                                                                 \
    cerr << __LINE__ << " " << #a << " " << '[' << " ";                          \
    for (auto el : a)                                                            \
    {                                                                            \
        cerr << '{' << " " << el.first << ',' << el.second << " " << '}' << " "; \
    }                                                                            \
    cerr << ']' << endl;
#else
#define dbg(n)   // single variable, string
#define dbgc(a)  // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif

ll testcase = 1;
const ll N = 200010;

vector<bool> prime(N, 1);
vector<vector<ll>> facts(N);

void Pre(void)
{
    facts[2].push_back(2);
    for (ll i = 4; i < N; i += 2)
    {
        prime[i] = 0;
        facts[i].push_back(2);
    }

    for (ll i = 3; i < N; i += 2)
    {
        if (prime[i])
        {
            // facts[i].push_back(i);
            for (ll j = i; j < N; j += i)
            {
                facts[j].push_back(i);
            }
        }
    }

    return;
}

void Solve(ll test)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, vector<ll>> mp;

    forn(i, 0, n)
    {
        cin >> v[i];
        for (auto p : facts[v[i]])
        {
            ll t = 0;
            while (v[i] % p == 0)
            {
                t++;
                v[i] /= p;
            }
            mp[p].push_back(t);
            // if(mp[p].size() > 2)
            // {
            //     sort(mp[p].begin(),mp[p].end());
            //     mp[p].pop_back();
            // }
        }
    }

    ll ans = 1;
    for (auto [p, q] : mp)
    {
        if (q.size() < n - 1)
            continue;
        sort(q.begin(), q.end());
        if (q.size() == n - 1)
        {
            ll t = q[0];
            while (q[0])
            {
                ans *= p;
                q[0]--;
            }
            continue;
        }
        while (q[1])
        {
            ans *= p;
            q[1]--;
        }
    }

    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Pre();

    // cin >> testcase;

    ll test;
    for (test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}