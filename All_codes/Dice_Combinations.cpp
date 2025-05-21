// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/CSES-1633
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
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> dp(n + 1, 0);
    // dp[1] = 1;
    forn(i,1,n+1)
    {
        if(i <= 6) dp[i] = 1;
        forn(j,1,7)
        {
            if(i - j < 0) break;
            // dbg(dp[i - j]);
            dp[i] += dp[i - j];
            dp[i] %= M;
        }
        dp[i] %= M;
    }
    // forn(i,0,n+1) cerr << dp[i] << NL;
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