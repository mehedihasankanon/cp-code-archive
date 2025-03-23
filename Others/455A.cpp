// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/455/problem/A
// partially editorial help
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<vector<ll>> dp(100010,vector<ll>(2,0));
    vector<ll> v(100010,0);
    ll mx = -1, mn = 2e18;
    forn(i,0,n) 
    {
        ll x; cin >> x;
        v[x]++;
        mx = max(x,mx);
        mn = min(x,mn);
    }

    // so this was the problem!
    // i was just calculating the max for the last step when it should be
    // calculating maximum for every step 
    dp[mn][1] = v[mn]*mn;
    forn(i,mn+1,mx+1)
    {
        dp[i][1] = dp[i-2][1] + v[i] * i;
        dp[i][0] = dp[i - 1][1];

        dp[i][0] = dp[i][1] = max(dp[i][0],dp[i][1]);
    }

    cout << max(dp[mx][0],dp[mx][1]) << nl;


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