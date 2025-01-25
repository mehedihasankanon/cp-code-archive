// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/UVA-11029
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
    
    
    
    return;
}   

ll leading(ll a, ll b)
{
    ld lg = (ld)b * log10((ld)a);

    // dbg(lg);
    lg = lg - floor(lg);
    // dbg(lg);
    // dbg(pow(10,lg));

    ld ret = floor(pow(10.0,lg+2.0));
    return (ll)ret;
}

ll trailing(ll a, ll b)
{
    ll m = 1000, ans = 1;
    while(b > 0)
    {
        if(b & 1) ans = (ans * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return ans % m;
}
    
    
void Solve(ll test)
{
    ll a, b; cin >> a >> b;
    ll lead = leading(a,b);
    while(lead > 1000) lead /= 10;
    cout << lead << "..." << trailing(a,b) << NL;
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