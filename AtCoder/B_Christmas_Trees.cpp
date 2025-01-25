// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc334/tasks/abc334_b
// status  : 
     
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
    
}   

ll flr(ll x, ll m)
{
    ll r = (x % m + m) % m;
    return (x - r) / m; 
}
    
    
void Solve(ll test)
{
    ll a, m, l, r;
    cin >> a >> m >> l >> r;

    // if(a >= l && a <= r)
    // {
    //     cout << (flr(abs(a-l),m) + flr(abs(a-r),m)) + 1 << NL;
    // }
    // else 
    // {
    //     cout << abs(flr(abs(a-l),m) - flr(abs(a-r),m)) << NL;
    // }

    cout << flr(r - a,m) - flr(l - a - 1,m) << NL;
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