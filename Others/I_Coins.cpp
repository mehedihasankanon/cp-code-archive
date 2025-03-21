// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/dp/tasks/dp_i
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
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
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
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
    // ld dp[n+5][n+5];
    vector<vector<ld>> dp(n + 1, vector<ld>(n+1));
    ld v[n];
    forn(i,0,n) cin >> v[i];

    ll mx = n/2 + 1;
    forn(i,0,n+1)
    {
        dp[i][0] = 1.0;
    }

    forn(i,1,n+1)
    {
        forn(j,1,mx + 1)
        {
            dp[i][j] = dp[i - 1][j - 1] * v[i - 1] + dp[i - 1][j] * (1.0 - v[i - 1]);
        }
    }

    // forn(i,0,n + 1) { forn(j,0,n+1) {cerr << dp[i][j] << " ";} cerr << nl;}

    cout << setprecision(15) << dp[n][mx] << nl;
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