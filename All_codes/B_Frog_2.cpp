// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/dp/tasks/dp_b
// AC --> recursive dp

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

void Pre(void)
{

    return;
}
ll n, k;
vector<ll> h;

ll cost(ll n, vector<ll> &dp)
{
    if(dp[n] != 2e18) return dp[n];

    forn(i,1,k+1)
    {
        if(n - i >= 0) dp[n] = min(dp[n], abs(h[n] - h[n - i]) + cost(n - i, dp));
        else break;
    }

    return dp[n];

}

void Solve(ll test)
{
    cin >> n >> k;
    h.resize(n);
    forn(i,0,n) cin >> h[i];
    vector<ll> dp(n, 2e18);
    dp[0] = 0;

    cout << cost(n - 1, dp) << nl;
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