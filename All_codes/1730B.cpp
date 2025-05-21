// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1730/problem/B
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

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n;
    cin >> n;
    vll x(n),t(n);
    forn(i,0,n) cin >> x[i];
    forn(i,0,n) cin >> t[i];

    // ll mx = x[0]+t[0], mn = x[0]-t[0];
    // forn(i,1,n) mn=min(mn,x[i]-t[i]),mx=max(mx,x[i]+t[i]);

    // cout << setprecision(13) << fixed << ((mx+mn)/2.0) << nl;
    // return;

    // ll l = 0, r = M, mid;
    // while(l < r-1)
    // {
    //     mid = (l+r)/2;

    //     ll cl = x[0]-mid+t[0], cr = x[0]+mid-t[0];
    //     bool fl = true;
    //     forn(i,1,n)
    //     {
    //         cl = max(cl, x[i]-mid+t[i]);
    //         cr = min(cr,x[i]+mid-t[i]);

    //         if(cl > cr)
    //         {
    //             fl = 0; break;
    //         }
    //     }
    //     if(fl) r = mid;
    //     else l = mid;
    // }
    // cout << r<< nl;
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
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   