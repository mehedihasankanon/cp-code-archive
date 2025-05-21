// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/EOlymp-9606
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

ll inv(ll b, ll n)
{
    ll ans = 1;
    ll m = n + 2;
    while(n > 0)
    {
        if(n & 1) ans = (ans * b) % m;
        b = (b * b) % m;
        n >>= 1;
        // dbg(ans);

    }
    return ans;
}
    
    
void Solve(ll test)
{
    ll a, b, n; cin >> a >> b >> n;
    // n = M;
    // dbg(inv(b,n - 2));
    cout << (a * inv(b,n-2)) % n << NL;
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