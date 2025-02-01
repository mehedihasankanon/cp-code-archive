// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1638
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
    vector<string> grid(n);
    forn(i,0,n) cin >> grid[i];

    if(grid[0][0] == '*' || grid[n - 1][n - 1] == '*')
    {
        cout << 0 << NL;
        return;
    }

    vector<vector<ll>> w(n+1, vector<ll>(n+1,0));
    w[1][1] = 1;
    forn(i,1,n+1)
    {
        forn(j,1,n+1)
        {
            if(grid[i - 1][j - 1] == '*') continue;
            w[i][j] += (w[i - 1][j] + w[i][j - 1])%M;
            w[i][j] %= M; 
        }
    }

    cout << w[n][n] << NL;
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