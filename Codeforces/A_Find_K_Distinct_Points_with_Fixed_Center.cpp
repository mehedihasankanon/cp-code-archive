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
    ll xc, yc, k;
    cin >> xc >> yc >> k;

    if(k == 1)
    {
        cout << xc << " " << yc << nl;
        return;
    }
    else if(k%2==1)
    {
        ll x = k*xc, y = k*yc;
        cout << x << " " << y << nl;

        // remains k - 1 points
        forn(i,(k-1)/2)
        {
            x--; y--;
            cout << x << " " << y << nl;
            cout << -x << " " << -y << nl;
        }
    }
    else // k even
    {
        ll x = (k*xc)/2, y = (k*yc)/2;
        cout << x+1 << " " << y+1 << nl;
        cout << x-1 << " " << y-1 << nl;
        // remaining k - 2 points
        x++; y++;
        forn(i,(k-2)/2)
        {
            x++; y++;
            cout << x << " " << y << nl;
            cout << -x << " " << -y << nl;
        }
    }
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