// Bismillahir Rahmanir Rahim
     
// link    : cf610b
// status  : editorial
     
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
    vll v(n);
    map<ll,vector<ll>> mp;
    ll mn = M, mncnt = 0;
    forn(i,0,n)
    {
        cin >> v[i];
        mp[v[i]].push_back(i+1);
        if(v[i] < mn)
        {
            mn = v[i]; mncnt = 1;
        }
        else if(v[i]==mn) mncnt++;
    }
    if(mncnt == 1)
    {
        cout << n*mn+n-1 << nl;
        return;
    }

    mp[mn].push_back(mp[mn][0]+ n);
    //sort(mp[mn].begin(),mp[mn].end());
    ll pl = 0;
    for(ll i = 1; i < mp[mn].size(); i++)
    {
        pl = max(pl,mp[mn][i]-mp[mn][i-1]-1);
    }
    cout << n*mn+pl << nl;
    return;
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