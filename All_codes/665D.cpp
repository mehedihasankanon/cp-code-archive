// Bismillahir rahmanir rahim

// https://codeforces.com/contest/665/problem/D
// ok

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template<typename T>
// using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Extra functionality :
// os.find_by_order(index) => iterator to the element at that index (0-based)
// os.order_of_key(value) => number of elements strictly less than value

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

const long long Pmax = 2000000;
vector<bool> prime(Pmax + 10, true);
vector<long long> primes;

void sieve(void)
{
    prime[1] = false;

    primes.push_back(2);
    for (long long i = 4; i <= Pmax; i += 2)
        prime[i] = false;

    for (long long i = 3; i <= Pmax; i += 2)
    {
        if (prime[i])
        {
            for (long long j = i * i; j <= Pmax; j += i)
            {
                prime[j] = false;
            }
            primes.push_back(i);
        }
    }
}

void Pre(void)
{
    sieve();
    return;
}

ll get1(vector<ll> &v)
{
    for (ll t : v)
    {

        if (t != 1 and prime[1 + t])
            return t;
    }
    return -1;
}

void Solve(ll test)
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    ll cnt1 = 0, cntEv = 0, cnt2 = 0, cntP = 0;
    forn(i, 0, n)
    {
        cin >> v[i];
        cnt1 += (v[i] == 1);
        cntEv += (v[i] % 2 == 0);
        cnt2 += (v[i] == 2);
        cntP += prime[v[i]];
    }

    vector<vector<ll>> ans;
    if (cnt1 > 0)
    {
        vector<ll> a;
        ll t = get1(v);
        a.assign(cnt1, 1);

        if (t != -1)
            a.emplace_back(t);
        dbgc(a);
        ans.emplace_back(a);
    }

    vector<ll> ans2;
    if (cnt2 > 0)
    {
        for (auto t : v)
        {
            if (t != 1 and prime[2 + t])
            {
                dbg(t);
                ans2 = {2, t};
                ans.emplace_back(ans2);
                dbgc(ans.back());

                break;
            }
        }
    }

    vector<ll> ans3;
    if (cntP > 0)
    {
        for (auto t : v)
        {
            if (prime[t])
            {
                ans3 = {t};
                ans.emplace_back(ans3);
                dbgc(ans.back());
                break;
            }
        }
    }

    forn(i, 0, n)
    {
        bool ok = false;
        forn(j, 0, n)
        {
            if (i == j)
                continue;

            if (prime[v[i] + v[j]])
            {
                ans.push_back({v[i], v[j]});
                break;
            }
        }
        if (ok)
            break;
    }

    sort(ans.begin(), ans.end(), [](vector<ll> &a, vector<ll> &b)
         { return a.size() > b.size(); });

    if (ans.empty())
    {
        cout << 1 << nl << v[0] << nl;
        return;
    }
    cout << ans[0].size() << nl;
    for (auto t : ans[0])
    {
        cout << t << " ";
    }
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
        // dbgc(test);
        Solve(test);
    }
    return 0;
}