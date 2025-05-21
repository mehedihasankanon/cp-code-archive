// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1158
// status  : RE AC
// using ll was the issue. needed int
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, x; cin >> n >> x;
    // vector<vector<ll>> dp(n + 1, vector<ll>(x + 1,0));
    ll dp[n + 1][x + 1];

    vector<ll> c(n), p(n);
    forn(i,0,n) cin >> c[i];
    forn(i,0,n) cin >> p[i];
    
    forn(i,0,n + 1)
    {
        forn(j,0,x + 1)
        {
            if(i == 0 || j == 0) dp[i][j] = 0;
            else 
            {
                if(c[i-1] > j) dp[i][j] = max(dp[i][j - 1],dp[i - 1][j]); // why?
                                                                          // optimal solution can come two ways:
                                                                          // 1. we took that book at some other state, just not this one
                                                                          // 2. we never took it.   
                else dp[i][j] = max(dp[i - 1][j - c[i-1]] + p[i - 1],dp[i - 1][j]);
            }
        }
    }

    cout << dp[n][x] << NL;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   