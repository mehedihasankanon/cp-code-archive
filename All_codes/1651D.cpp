// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1651/problem/D
// **editorial**

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

#pragma GCC target("avx2")

using namespace std;

// using ll = long long;
using ll = int;
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

void Pre(void)
{

    return;
}

void Solve(ll test)
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    set<pair<ll, ll>> s;
    forn (i,0,n)
    {
        // cin >> x >> y
        cin >> v[i].first>> v[i].second;
        s.insert(v[i]);
    }

    map<pair<ll, ll>, pair<ll, ll>> ans;
    queue<pair<ll, ll>> qu;
    ll dx[] = {0, 0, -1, 1};
    ll dy[] = {-1, 1, 0, 0};
    for (auto [p, q] : v)
    {
        forn(i, 0, 4)
        {
            ll x1 = p + dx[i], y1 = q + dy[i];
            if (s.count({x1, y1}))
            {
                continue;
            }
            ans[{p, q}] = {x1, y1};
            qu.push({p, q});
            break;
        }
    }

    while (!qu.empty())
    {
        ll x = qu.front().first, y = qu.front().second;
        qu.pop();
        forn(i, 0, 4)
        {
            ll x1 = x + dx[i], y1 = y + dy[i];
            if (!s.count({x1, y1}) || ans.count({x1, y1}))
            {
                continue;
            }
            ans[{x1, y1}] = ans[{x, y}];
            qu.push({x1, y1});
        }
    }

    for (auto p : v)
    {
        cout << ans[p].first << " " << ans[p].second << endl;
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
        Solve(test);
    }
    return 0;
}