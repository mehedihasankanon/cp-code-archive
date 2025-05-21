// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/EOlymp-11161
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
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define debug(n) cout<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define debugc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<el<<" ";}cout<<']'<<endl;
#define debugcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<'{'<<" "<<el.F<<','<<el.S<<" "<<'}'<<" ";}cout<<']'<<endl;
#else
#define debug(n) // single variable, string
#define debugc(a) // vector, deque, array
#define debugcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll t, a, b; cin >> t >> a >> b;
    vector<vector<bool>> dp(t + 1, vector<bool>(2,false));

    dp[0][0] =  dp[0][1] = true;
    ll ans = 0;
    forn(i,0,t + 1)
    {
        if(dp[i][0])
        {
            dp[i/2][1] = true;
            dp[i][1] = true; // we can reach it if we drink the water at first
            if(i + a <= t) dp[i + a][0] = dp[i + a][1] = true;
            if(i + b <= t) dp[i + b][0] = dp[i + b][1] = true;
        }
        if(dp[i][0] || dp[i][1]) ans = max(ans, i);
    }

    forn(i,0,t + 1)
    {
        if(dp[i][1])
        {
            if(i + a <= t) dp[i + a][1] = true;
            if(i + b <= t) dp[i + b][1] = true;
        }
        if(dp[i][0] || dp[i][1]) ans = max(ans,i);
    }

    // forn(i,0,t+1)
    // {
    //     cerr << dp[i][0] << dp[i][1] << nl;
    // }

    cout << ans << nl;
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