// Bismillahir Rahmanir Rahim
     
// link    : https://www.codechef.com/JAN221B/problems/RIFFLES
// status  : partially
     
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


ll exp(ll a, ll b, ll n)
{
    ll ans = 1;
    while(b > 0)
    {
        if(b & 1) ans = (ans * a) % (n - 1);
        a = (a * a) % (n - 1);

        b >>= 1;

    }
    return ans;
}
    
    
void Solve(ll test)
{
    ll n, k; cin >> n >> k;
    ll p = exp(2,k,n);

    ll out = 1;
    forn(i,0,n)
    {
        if(out % (n - 1) == 0) cout << n - 1 << " ";
        else if(out > 1 && out % (n - 1) == 1) cout << n << " ";
        else cout << out % (n - 1) << " ";
        out += p;
        // out %= (n - 1);
    }
    cout << NL;
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