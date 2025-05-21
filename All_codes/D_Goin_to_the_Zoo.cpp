// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/abc404/tasks/abc404_d
// ac

#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

#pragma GCC target("avx2")

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

void Pre(void)
{

    return;
}

void Solve(ll test)
{
    ll n, m;
    cin >> n >> m;
    vector<ll> c(n + 1);
    forn(i, 1, n + 1) cin >> c[i];
    vector<vector<ll>> v(n + 1);
    forn(i, 1, m + 1)
    {
        ll t;
        cin >> t;
        forn(j, 0, t)
        {
            ll x;
            cin >> x;
            v[x].push_back(i);
        }
    }

    ll ans = 2e18;
    forn(i, 1LL, (1LL << (n << 1)))
    {
        ll cst = 0;
        vector<ll> vis(m + 1,0);
        forn(j,0,(n << 1))
        {
            if(((i >> j) & 1))
            {
                cst += c[(j>>1)+1];
                for(auto x : v[(j>>1)+1]) 
                {
                    vis[x]++;
                }
            }
        }
        // dbg(cst);
        bool fl = 1;
        forn(i,1,m+1) if(vis[i] < 2)
        {
            fl = 0; break;
        }
        if(fl) ans = min(cst,ans);
    }

    cout << ans << nl;
    return;
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