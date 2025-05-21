// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2009/problem/D
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
    map<ll,ll> mp1, mp2;
    forn(i,0,n)
    {
        ll a, b; cin >> a >> b;
        if(b) mp2[a]++;
        else mp1[a]++;
    }

    ll a = mp1.size(); ll b = mp2.size();

    ll ans = 0;
    for(auto [u,v] : mp1)
    {
        if(v && mp2[u])
        {
            ans += b - 1;
        }
        if(v && mp2[u - 1] && mp2[u + 1]) ans++;
        // dbg(u); dbg(ans);
        // if(mp1[u - 1] && mp1[u + 1]) ans++;
    }
    for(auto [u,v] : mp2)
    {
        if(v && mp1[u])
        {
            ans += a - 1;
        }
        if(v && mp1[u - 1] && mp1[u + 1]) ans++;
        // dbg(u); dbg(ans);
    }
    // cerr << "----------" << NL;
    cout << ans << NL;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   