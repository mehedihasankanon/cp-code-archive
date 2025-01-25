// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/USACO-595
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

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    vll pref(n+1); pref[0]=0;
    vector<vector<ll>> freq(7);

    forn(i,1,n+1)
    {
        ll x; cin >> x;
        //dbg(x);
        pref[i]=x+pref[i-1];
        freq[pref[i]%7].push_back(i);
        //dbg(i); dbg(pref[i]);
    }

    ll mx = 1;
    forn(i,0,7) if(!freq[i].empty()) {/*dbg(freq[i].back()); dbg(freq[i].front());*/ mx = max(freq[i].back()-freq[i].front(),mx);}
    cout << mx << nl;
    return;
}   
    
int main()
{   
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