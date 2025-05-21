// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1851/problem/A
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
    ll n, m , k, h; cin >> n >> m >> k >> h;
    // h %= k;
    ll ans = 0;
    forn(i,0,n)
    {
        ll x; cin >> x;
        ans += ((abs(x - h)%k == 0) && (abs(x - h)/k <= m - 1) && (abs(x - h)/k > 0));
        // ll d= abs(x - h);
        // if(d % k == 0 && d/k <= m) ans++;
        // ans += (x % k - h == 0);
    }
    cout << ans << NL;
    return;
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