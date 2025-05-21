// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1637
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
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

void DP(vector<ll> &dp, ll n)
{
    // dbg(n);
    // if(n == 0) return;
    if(n > 0 && n < 10)
    {
        dp[n] = 1; return;
    }
    if(dp[n] != INF) return;

    // forn(i,1,10)
    ll t = n;
    while(t > 0)
    {
        // if(t % 10 != 0) dp[n] = min()
        if(t % 10 == 0)
        {
            t /= 10;
            continue;
        }
        if(n - t % 10 >= 0)
        {
            if(dp[n - t % 10] == INF) DP(dp,n - t % 10);
            dp[n] = min(dp[n],dp[n - t % 10] + 1); 
        }
        t /= 10;
    }
    return;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> dp(n + 1, INF);
    dp[0] = 0;

    DP(dp,n);
    // forn(i,0,n+1) cerr << dp[i] << " ";
    cout << dp[n] << NL;
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