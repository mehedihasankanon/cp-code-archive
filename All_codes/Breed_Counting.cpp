// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/USACO-572
// status  : 
     
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
    
#define dbg(x)                  cout << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n, m; cin >> n >> m;
    vector<vector<ll>> pref(n+1);
    pref[0].resize(3,0);
    forn(i,1,n+1)
    {
        ll x; cin >> x;
        pref[i].resize(3);
        pref[i] = pref[i-1];
        pref[i][x-1]++;
    }

    forn(i,0,m)
    {
        ll l, r; cin >>  l >> r;
        cout << pref[r][0]-pref[l-1][0] << " " << pref[r][1]-pref[l-1][1] << " " << pref[r][2]-pref[l-1][2] << nl;
    }
    return;
}   
    
int main()
{   
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   