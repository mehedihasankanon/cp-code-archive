// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1716
// status  : WA AC
     
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


// eikhane RE khaitesilo!!
#define mx 10000005
vector<ll> fact(mx,1);

void Pre(void)
{
    forn(i,1,mx) fact[i] = (fact[i - 1] * i) % M;
}   

ll inv(ll a)
{
    ll ans = 1, p = M - 2;
    while(p > 0)
    {
        if(p&1) ans = (ans * a) % M;
        a = (a*a) % M;
        p >>= 1;
    }
    return ans;
}
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    cout << (((fact[n + m - 1] * ((inv(fact[n - 1]) * inv(fact[m]))%M)) % M) + M) % M << NL;
    return;
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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