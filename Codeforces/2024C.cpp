// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2024/problem/C
// status  : WA
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
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

bool comp(pair<ll,pair<ll,ll>> a, pair<ll,pair<ll,ll>> b)
{
    return max(a.second.first,a.second.second) < max(b.second.first,b.second.second);
}
    
void Solve(ll test)
{   
    ll n; cin >> n;
    vector<pair<ll,pair<ll,ll> > > a(n);
    forn(i,0,n)
    {
        ll x, y; cin >> x >> y;
        a[i] = {i+1,{x,y}}; 
    }

    sort(a.begin(),a.end(),comp);

    for(auto [x,y] : a) cout << y.first << " " << y.second << " ";
    cout << nl;
    return; 
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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