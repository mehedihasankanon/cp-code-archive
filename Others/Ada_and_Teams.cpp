// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/SPOJ-ADATEAMS
// status  : tle ac
     
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
#define mx 10000005
vector<ll> f(mx,1);
void Pre(void)
{
    
    forn(i,1,mx) f[i] = (f[i - 1] * i) % M;
    
    return;
}   

ll inv(ll a)
{
    ll ans = 1, p = M - 2;
    while(p > 0)
    {
        if(p&1) ans = (ans * a) % M;
        a = (a * a) % M;
        p >>= 1;
    }
    return ans;
}

ll C(ll a, ll b)
{
    return (f[a] * ((inv(f[b]) * inv(f[a - b])) % M)) % M;
}


// this was giving tle

// ll pwr(ll a, ll b)
// {
//     ll p = 1;
//     while(b--)
//     {
//         p = (p * a) % M;
//     }
//     return p % M;
// }

ll pwr(ll a, ll b)
{
    ll ans = 1;
    while(b > 0)
    {
        if(b & 1) ans = (ans * a)%M;
        a = (a * a) % M;
        b >>= 1;
    }
    return ans;
}
    
void Solve(ll n, ll a, ll b,ll d)
{
    cout << (((C(n,a) * pwr(C(b,d), a)) % M)) % M << NL;
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
    
    // ll test;
    // for(test = 1; test <= testcase; test++) {
    //     Solve(test);
    // }

    ll n,a,b,d;
    while(cin >> n >> a >> b >> d) Solve(n,a,b,d);
    return 0;
}   