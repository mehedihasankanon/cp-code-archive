// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc275/tasks/abc275_d
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>

// #pragma GCC target("avx2")
    
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
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
vector<ll> v(1e8+10,0);

ll f(ll n)
{
    if(n > 1e8) return f(n/2) + f(n/3);
    else 
    {
        if(v[n]) return v[n];
        else
        {
            v[n] = f(n/2) + f(n/3);
            return v[n];
        }
    }
}    
    
void Solve(ll test)
{
    ll n; cin >> n;
    v[0] = 1;
    cout << f(n) << NL;
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