// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/702/problem/C
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cerr << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n, k; cin >> n >> k;
    vll a(n), b(k); forn(i,0,n) cin >> a[i]; forn(i,0,k) cin >> b[i];

    ll pa = 0, pb = 0, ans = -LONG_LONG_MIN;
    while(pa < n)
    {
        while(pb < k-1 and b[pb+1] <= a[pa]) pb++;
        // dbg(a[pa]); dbg(b[pb]);
        if(pb==k-1) ans = max(ans,abs(a[pa]-b[pb]));
        else ans = max(ans,min(abs(a[pa]-b[pb]),abs(b[pb+1]-a[pa])));
        pa++;
    }

    cout << ans << nl;
    return;

}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   