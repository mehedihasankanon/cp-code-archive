// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/UVA-12455
// status  : ac
     
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



void Solve(ll test)
{   
    ll n; cin >> n;
    ll p; cin >> p;
    vector<ll> v(p);
    forn(i,0,p) cin >> v[i];

    forn(i,0,1<<p)
    {
        ll len = 0;
        forn(j,0,p)
        {
            if(i&(1<<j)) len += v[j];
            //dbg(len);
            if(len > n) break;
            if(len == n)
            {
                cout << "YES\n";
                return;
            }
        }
        if(len == n)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
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