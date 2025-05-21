// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1746
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
ll MOD = 998244353;
    
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
    ll n, m; cin >> n >> m;

    vector<vector<ll>> dp(n,vector<ll>(m + 1,0));

    ll x; cin >> x;
    if(x == 0)
    {
        fill(dp[0].begin(),dp[0].end(),1);
    }
    else
    {
        dp[0][x]++;
    }

    forn(i,1,n)
    {
        cin >> x;

        if(x == 0) // it means 1 to m all possible, so we calculate all of them
                   // dp[i - 1][...] --> we already have done all calculations for this
        {
            forn(j,1, m+1)
            {
                dp[i][j] += dp[i - 1][j];
                if(j > 1) dp[i][j] += dp[i - 1][j - 1];
                if(j < m) dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] %= mod;
            }
        }
        else
        {
            dp[i][x] += dp[i - 1][x];
            if(x > 1) dp[i][x] += dp[i - 1][x - 1];
            if(x < m) dp[i][x] += dp[i - 1][x + 1];
            dp[i][x] %= mod; 
        }
    }

    ll ans = 0; // we have to calculate ans for all possible configs --> in the last row
    forn(i,1,m + 1)
    {
        (ans += dp[n -1][i]) %= mod;
    }

    cout << ans << NL;
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