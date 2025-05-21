// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1352/problem/G
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
    if(n < 4)
    {
        cout << -1 << NL;
        return;
    }
    if(n & 1)
    {
        for(ll i = 2; i < n - 3; i += 2) cout << i << " ";
        cout << n - 1 << " " << n - 3 << " ";
        for(ll i = n; i >= 1; i -= 2) cout << i << " ";
        cout << NL;
        return;
    }
    else
    {
        for(ll i = 1; i < n - 3; i += 2) cout << i << " ";
        cout << n - 1 << " " << n - 3 << " ";
        for(ll i = n; i >= 2; i -= 2) cout << i << " ";
        cout << NL;
        return;
    }
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