// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/1391/problem/C
// *editorial*
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   

ll fact(ll n)
{
    if(n == 0) return 1;
    ll ans = 1;
    while(n) ans = (ans * n) % mod, n--;
    return ans % mod;
}

ll modinv(ll n)
{
    ll p = mod - 2;
    ll inv = 1;
    while(p)
    {
        if(p & 1) inv = (inv * inv) % mod;
        p >>= 1;
    }
    return inv;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    // wrong
    // ll t1 = (((n * (n - 1)) % mod) * (n - 2)) % mod;
    // ll t2 = (t1*t1)%mod;
    // ll t3 = (t2 * modinv(36))%mod;
    // ll t4 = (t3 * fact(n-3)) % mod;
    // dbg(t1); dbg(t2); dbg(t3); dbg(t4); dbg(fact(n-3));
    // cout << t4 << nl;

    ll t1 = 1;
    forn(i,0,n-1) 
    {
        t1 <<= 1; t1 %= mod;
    }
    cout << (fact(n) % mod - t1 + mod)%mod << nl;
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

