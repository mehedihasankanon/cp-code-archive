// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/96/problem/B
// status  : wa ac
     
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

ll dig(ll n)
{
    ll ans = 0;
    while(n > 0) ++ans,n/=10;
    return ans;
}

void Solve(ll test)
{   
    ll n; cin >> n;
    ll N = dig(n), ans = M*M; // 7e9 scalee e ans asha possible chilo which i didnt consider!
    
    for(ll d = N; d <= N+2-N%2;d++)
    {
        if(d%2==0)
        {
            forn(i,0,(1<<d))
            {
                ll x = 0, n4 =0, n7 =0;
                forn(j,0,d)
                {
                    x*=10;
                    if(i&(1<<j)) {x+=4;n4++;}
                    else {x+=7;n7++;}
                }
                if(x>=n and n4==n7) ans = min(ans,x);
            }
        }
    }

    cout << ans << nl;

}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   