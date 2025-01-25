// Bismillahir Rahmanir Rahim
     
     
// status: wrong. for now

     
     
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           p32;
typedef pair<ll,ll>             p64;
typedef pair<double,double>     pdd;
typedef vector<ll>              v64;
typedef vector<int>             v32;

typedef vector<vector<int> >    vv32;
typedef vector<vector<ll> >     vv64;
typedef vector<vector<p64> >    vvp64;
typedef vector<p64>             vp64;
typedef vector<p32>             vp32;
    
ll MOD = 998244353;
double eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << endl
#define nl                      "\n"
#define fastio                  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF                     2e18
#define forn(i,e)               for(ll i = 0; i < e; i++)
#define forsn(i,s,e)            for(ll i = s; i < e; i++)
#define rforn(i,s)              for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e)           for(ll i = s; i >= e; i--)

#define sf2(x,y)                cin >> x >> y
#define sf3(x,y,z)              cin >> x >> y >> z
#define pnl                     cout << nl
#define eb                      emplace_back
#define mp                      make_pair
#define pb                      push_back
#define fi                      first
#define se                      second
#define all(x)                  (x).begin(), (x).end()
#define sz(x)                   ((ll)(x).size())
    
    
void solve()
{   
    ll n, q; cin >> n >> q;
    char str1[200005], str2[200005];
    cin >> str1 >> str2;


    forn(i,q)
    {
        ll l,r,um = 0; cin >> l >> r;
        char ns1[200005], ns2[200005];

        for(ll j = 0; j <= r-l; j++) 
        {
            ns1[j] = str1[l-1+j]; //dbg(str1[l+j]);
            ns2[j] = str2[l-1+j]; //dbg(str2[l+j]);

        }
        sort(ns1, ns1 + r-l+1);
        sort(ns2, ns2 + r-l+1);
        for(ll j = 0; j <= r-l; j++)
        {
            if(ns1[j] != ns2[j]) um++;
            //dbg(ns1[j]); dbg(ns2[j]);
        }
        cout << um << nl;
    }
    return; // TLE khabo sure :p
}   
    
int main()
{   
    fastio;
    ll t;
    cin >> t;
    
    ll i;
    for(i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}   
    









    
//OJ debugging 
    
/*  
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x << " " << x << endl
#else
#define dbg(x)
#endif
*/  
//goes into main()
/*
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
*/