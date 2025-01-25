// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/195/problem/B
// status  : wa wa ac
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << "n"
#define nl                      "\n"
#define fastio                  
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)

#define pnl                     cout << nl
#define eb                      emplace_back
#define mp                      make_pair
#define pb                      push_back
#define fi                      first
#define se                      second
#define all(x)                  (x).begin(), (x).end()
#define sz(x)                   ((ll)(x).size())

ll testcase = 1;

ll pwr(ll a, ll b)
{
    if(b&1) return a;
    else return a*a;
}



void Solve(ll test)
{   
    ll n, m; cin >> n >> m;
    vector<ll> pattern(m);
    if(m&1) forn(i,0,m) pattern[i] = (m+1)/2 + pwr(-1,i)*ceil(i/2.0);
    else forn(i,0,m) pattern[i] = (m)/2 + pwr(-1,i+1)*ceil(i/2.0);
    forn(i,0,n)
    {
        cout << pattern[i%m] << nl; 
    }
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   