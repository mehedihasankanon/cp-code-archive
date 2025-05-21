// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/467/problem/B
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>

#pragma GCC target("popcnt")
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
    ll n, m ,k; cin >> n >> m >> k;
    vector<vector<ll>> v(m, vector<ll>(20,0));
    forn(i,0,m)
    {
        ll x; cin >> x;
        forn(j,0,20)
        {
            if(x & (1 << j)) v[i][j]++;
        }
        // v[i] = __builtin_popcount(x);
    }
    vector<ll> v1(20,0);
    ll x; cin >> x;
    forn(i,0,20)
    {
        if(x & (1 << i)) v1[i]++;
    }

    ll ans = 0;
    forn(i,0,m)
    {
        ll dif = 0;
        forn(j,0,20)
        {
            if(v[i][j] != v1[j]) dif++;
        }
        if(dif <= k) ans++;
    }
    cout << ans << NL;
    return;

    // ll x; cin >> x;
    // x = __builtin_popcount(x);
    // dbg(x);

    // ll ans = 0;
    // forn(i,0,m)
    // {
    //     dbg(v[i]);
    //     if(abs(v[i] - x) <= k) ans++;
    // }

    // cout << ans << NL;
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