// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
// status  : ac
     
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
    
#define dbg(x)                  cout << #x << " " << x << "\n"
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
    vll v(n), prefsum(n+1,0); forn(i,0,n) {cin >> v[i]; prefsum[i+1] = prefsum[i]+v[i];}
    

    // wrong approach

    // ll l = 0, r = n-1;
    // while(sum > k and l < r)
    // {
    //     if(v[l] > v[r]) sum -= v[l++];
    //     else sum -= v[r--];
    // }
    // if(l==r)
    // {
    //     if(v[l] <= k) 
    //     {
    //         cout << 1 << nl;
    //         return;
    //     }
    //     else 
    //     {
    //         cout << 0 << nl;
    //         return;
    //     }
    // }
    // cout << r-l+1 <<nl;
    // return;


    ll l = 0, r = 0, ans = 0;
    while(l < n and r < n)
    {
        ll sm = prefsum[r+1]-prefsum[l];
        while(sm > k) sm -= v[l++];
        ans = max(ans,r-l+1);
        r++;
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