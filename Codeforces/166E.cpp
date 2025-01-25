// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/166/problem/E
// status  : TLE
     
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

ll pwr(ll a)
{
    ll ans = 1;
    // while(a--) ans = (ans * 3) % M;

    ll b = 3;
    while(a > 0)
    {
        if(a & 1) ans = (ans * b) % M;
        b = (b * b) % M;

        a >>= 1;
    }

    return (ans % M);
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;

    // ll ans = 0;
    // while(n >= 1)
    // {
    //     ans = (ans + fl * pwr(n)) % M;
    //     n--;
    //     fl *= -1;
    // }

    // ll fl = (n & 1) ? -1 : 1;

    // dbg(pwr(n));
    // ans = ((pwr(n) + 1) / 4);
    // ans = ceil((pwr(n) + fl) / 4.0);
    ll a = (n & 1) ? -3 : 3, fl = (n & 1) ? -1 : 1;

    // dbg((pwr(n) - fl));
    ll ans = (ceil((pwr(n) - fl) / 4.0));
    ans %= M; 


    cout << (ans + M) % M << NL;
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