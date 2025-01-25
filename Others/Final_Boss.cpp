// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/CodeForces-1985F
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
    ll n, life;
    cin >> life >> n;
    vll v(n), c(n);
    ll mx = 0;
    forn(i,0,n) {cin >> v[i]; life -= v[i];mx = max(mx,v[i]);}
    forn(i,0,n) cin >> c[i];
    // forn(i,0,n) cout << v[i] << " ";
    // cout << nl;
    // forn(i,0,n) cout << c[i] << " ";
    // cout << nl;
    // dbg(life);
    if(life <= 0)
    {
        cout << 1 << nl;
        return;
    }

    ll l = 0, r = ((ll)INF)/mx, mid;
    while(l + 1< r)
    {
        mid = (r+l)/2;
        // ll dmg = 0;
        ll temp = life;
        // dbg(l); dbg(r); dbg(mid);
        forn(i,0,n)
        {
            ll maircnt = mid/(c[i]);
            temp -= v[i]*(maircnt);
            // dbg(temp);
            if(temp <= 0) break;
        }
        if(temp <= 0) r=mid;
        else l = mid;
    }

    cout << r+1 << nl;
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