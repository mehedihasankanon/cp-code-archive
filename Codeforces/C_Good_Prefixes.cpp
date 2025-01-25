// Bismillahir Rahmanir Rahim
     
     
// status: ac
     
     
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
    ll n; cin >> n;
    vector<ll> a(n);
    /*forn(i,n) cin >> a[i];

    ll ng = 0, ps = 0;
    if(a.size() == 1 && a[0] == 0) cout << 1 << nl;
    else if(a.size() == 1 && a[0] != 0) cout << 0 << nl;
    forsn(i,1,n)
    {
        ps += a[i-1];
        if(a[i] == ps) ng++;
    }
    cout << ng << nl;*/

    ll pm = 0, ps = 0, ng = 0;
    if(n == 1)
    {
        cin >> a[0];
        if(a[0] != 0)
        {
            cout << 0 << nl;
            return;
        } 
        else 
        {
            cout << 1 << nl;
            return;
        }
    }
    else 
        forn(i,n)
        {
            cin >> a[i];
            pm = max(pm,a[i]);
            ps += a[i];
            if(ps - pm == pm) ng++;
        }
    cout << ng << nl;
    return;
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