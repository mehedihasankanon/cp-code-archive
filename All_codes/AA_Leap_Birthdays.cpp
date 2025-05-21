// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/contest/662895#problem/AA
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

bool ly(ll x)
{
    if(x %400==0) return true;
    else if(x%4==0 and x%100 != 0) return true;
    else return false;
}

void Solve(ll test)
{   
    ll d,m,sy,ey; cin >> d >> m >> sy >> ey;
    ll ans = 0;

    if(m == 2 and d == 29){
        //ans++;
        for(ll i=sy;i<ey+1;i+=4) {if(ly(i)) ans++; /*dbg(ly(i));*/} 
    }
    else 
    {
        ans = -sy+ey+1;
    }
    cout << "Case " << test <<": " << ans-1 << nl;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   