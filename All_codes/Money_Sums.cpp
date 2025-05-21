// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1745
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

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    ll mx = 0;
    vector<ll> c(n); forn(i,0,n) {cin >> c[i]; mx += c[i];}

    // bool dp[n + 1][mx + 1] = {false};
    vector<vector<bool>> dp(n + 1, vector<bool>(mx +1, false));
    dp[0][0] = true;

    forn(i,1,n + 1)
    {
        forn(j,0,mx + 1)
        {
            dp[i][j] = dp[i - 1][j]; // if we don't take the coin, but have already made it somehow
            // if(dp[])
            if(j - c[i - 1] >= 0 && dp[i - 1][j - c[i - 1]]) dp[i][j] = true; // of we take the coin, and if we made the remaining amount before
        }
    }

    vector<ll> ans;
    forn(i,1,mx+1)
    {
        if(dp[n][i]) ans.push_back(i);
    }

    // forn(i,0,n+1)
    // {
    //     forn(j,0,mx + 1) cerr << dp[i][j] << " ";
    //     cerr << NL;
    // }

    cout << ans.size() << NL;
    forn(i,0,ans.size()) cout << ans[i] << " ";
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