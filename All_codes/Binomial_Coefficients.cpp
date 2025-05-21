// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1079
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

#define mx 1000005

// vector<vector<ll>> coeff(mx, vector<ll>(mx,1));
vector<ll> fact(mx,1)/*, inv(mx,1)*/;

ll inverse(ll x)
{
    ll ans = 1, p = M - 2;
    while(p > 0)
    {
        if(p&1) ans = (ans*x)%M;
        x = (x*x) % M;
        p >>= 1;
    }
    return ans;
}

void Pre(void)
{
    forn(i,1,mx)
    {
        fact[i] = (fact[i-1]*i)%M;
        // inv[i] = inverse(i) % M;
    }

    return;

}   

    
    
void Solve(ll test)
{
    ll a, b; cin >> a >> b;
    // cout << coeff[a][b] << NL;
    // dbg(fact[a]); dbg(fact[b]); dbg(inv[b]); dbg(fact[a - b]); dbg(inv[a-b]); cerr << "-----------" << NL;
    // dbg(fact[a]); dbg(inverse(fact[b])); dbg(inverse(fact[a-b])); cerr << "-------------" << NL;
    cout << (fact[a] * ((inverse(fact[b]) * inverse(fact[a - b]))%M)) % M << NL;
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
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   