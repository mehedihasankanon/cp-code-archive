// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2032/problem/B
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

void Pre(void)
{
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;

    if(n == 1 && m == 1)
    {
        cout << 1 << NL << 1 << NL;
        return;
    }

    if(m == 1 || m >= n)
    {
        cout << -1 << NL;
    }
    else
    {
        // test case check valo kore na kora will be my undoing :(
        if(!(m&1)) cout << 3 << NL << 1 << " " << m << " " << m+1 << NL;
        else cout << 5 << NL << 1 << " " << m - 1 << " " << m << " " << m + 1 << " " << m + 2 << NL;  
    }
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