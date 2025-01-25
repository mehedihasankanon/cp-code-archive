// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/contest/662895#problem/C
// status  : 
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
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
    
#define dbg(x)                  cout << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()

ll testcase = 1;



ll Solve(ll n)
{   
    ll out = 0;
    while(n>0)
    {
        out += n%10;
        n /= 10;
    }
    return out;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    //cin >> testcase;
    
    /*ll test;
    for(test = 1; test <= testcase; test++)
    {
        //Solve(test);
    }*/

    ll n; cin >> n;
    while(n > 0)
    {
        ll ans = Solve(n);
        while(ans >= 10) ans = Solve(ans);
        cout << ans << nl;
        cin >> n;
    }
    return 0;
}   