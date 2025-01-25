// Bismillahir Rahmanir Rahim
     
// link    : https://www.spoj.com/problems/ZSUM/
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
ll m = 10000007;

ll p(ll a, ll b)
{
    ll ans = 1;
    while(b > 0)
    {
        if(b & 1) ans = (ans * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return ans % m;
}    
    
void solve(ll n, ll k)
{
    // dbg(p(n,k));
    cout << (((2 * p(n - 1, k)) % m) + ((2 * p(n - 1, n - 1)) % m) + ((p(n, n)) % m) + ((p(n, k)) % m)) % m << NL;
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

    ll n, k; 
    cin >> n >> k;
    while(n != 0 && k != 0)
    {
        solve(n,k);
        cin >> n >> k;
    }
    return 0;
}   