// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/2413
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

const ll m = 1e6 + 10;
ll dp[m][2];

void Pre(void)
{
    dp[1][0] = dp[1][1] = 1;
    forn(i,2,1e6 + 5)
    {
        dp[i][0] = dp[i-1][1] + dp[i -1][0] * 4;
        dp[i][0] %= mod;
        dp[i][1] = dp[i - 1][0] + 2*dp[i - 1][1];
        dp[i][1] %= mod;
    }

    // cout << (dp[n][1] + dp[n][0]) % mod << NL;
    // return;
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    // vector<vector<ll>> dp(n + 1,vector<ll>(2,0));
    cout << (dp[n][0] + dp[n][1]) % mod << NL;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   