// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc393/tasks/abc393_c
// status  : ok
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    map<pair<ll,ll>,ll> mp;

    ll cnt = 0;
    forn(i,0,m)
    {
        ll u, v; cin >> u >> v;
        if(u == v) cnt++;
        else
        {
            if(u > v)
            {
                ll temp = u;
                u = v;
                v = temp;
            }
            mp[{u,v}]++;
        }
    }

    for(auto [p,q] : mp)
    {
        // dbg(p.first); dbg(p.second); dbg(q);
        if(q) cnt += q - 1;
    }
    cout << cnt << nl;
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