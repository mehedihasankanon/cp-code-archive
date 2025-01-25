// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/dp/tasks/dp_b
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
    ll n, k; cin >> n >> k;
    vector<ll> v(n+1), dp(n + 1, INF);
    forn(i,1,n+1) cin >> v[i];

    dp[0] = 0; dp[1] = 0;
    forn(i,2,n+1)
    {
        ll j = 1;
        while(j <= k && i - j >= 1)
        {
            dp[i] = min(dp[i], dp[i - j] + abs(v[i] - v[i - j]));
            // dbg(dp[i]);
            j++;
        }
        // cerr << "---------" << NL;
    }
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