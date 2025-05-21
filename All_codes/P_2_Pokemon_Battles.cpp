// Bismillahir Rahmanir Rahim
     
// link    : https://dmoj.ca/problem/daacc1p2
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

ll f(ll x, string s, string e)
{
    if(s == e) return x;

    if(e == "FIRE")
    {
        if(s == "WATER") return 2*x;
        else return x/2;
    }
    if(e == "WATER")
    {
        if(s == "GRASS") return 2*x;
        else return x/2;
    }
    if(e == "GRASS")
    {
        if(s == "WATER") return x/2;
        else return 2*x;
    }
}
    
    
void Solve(ll test)
{
    string s; cin >> s;
    ll n; cin >> n;
    // vector<ll> v(n);
    ll mx = -1;
    forn(i,0,n)
    {
        ll x; cin >> x;
        string t; cin >> t;
        mx = max(mx,f(x,t,s));
    }
    cout << mx << NL;
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