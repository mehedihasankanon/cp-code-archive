// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1807/problem/D
// status  : ac
     
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
    vll v(n), pref(n+1,0);
    ll tot = 0;
    forn(i,0,n)
    {
        cin >> v[i];
        pref[i+1] = pref[i]+v[i];
    } 
    tot = pref[n];

    forn(i,0,m)
    {
        ll l,r,k; cin >> l >> r >> k;
        ll f = tot + (-(pref[r]-pref[l-1])+k*(r-l+1));
        if(f&1) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return;


}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   