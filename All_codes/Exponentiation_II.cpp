// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/CSES-1712
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

ll pwr(ll a, ll b)
{
    ll ans = 1;
    if(b == 0) return ans;
    while(b > 0)
    {
        if(b & 1) ans = (ans * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return ans;
}
    
    
void Solve(ll test)
{
    ll a, b, c; cin >> a >> b >> c;
    
    // wrong
    // cout << pwr(a, pwr(b,c)) << NL; 
    
    
    /*
        by euler's thm:
        a ^ b mod m = a ^ (b mod phi(m)) mod m [if a and m are coprime]
        phi(1e9 + 7) = 1e9 + 6 :))
    */


    M--;
    ll k = pwr(b,c);
    M++;
    cout << pwr(a,k) << NL;
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