// Bismillahir Rahmanir Rahim
     
     
// status: wa
     
     
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
    ll n, max = 0; cin >> n;
    vector<pair<ll,ll>> ind, chi;
    forn(i,n+1) {ind.push_back(make_pair(i,0)); chi.push_back(make_pair(i,0));}

    forn(i,n) 
    {
        ll x; cin >> x;
        ind[x].second++;
        max = __max(max,x);
    }

    bool fl = true;
    forsn(i,1,max+1)
    {
        forsn(j,ind[i].first+1,ind[i].first+1+ind[i].second)
        {
            if(ind[j].second == 0) chi[i].second++;
        }
        dbg(chi[i].second);
        if(chi[i].second > 0 && chi[i].second < 3) 
        {
            fl = false;
            break;
        }
    }


    if(fl) cout << "Yes";
    else cout << "No";
    return;
}
    
int main()
{   
    fastio;
    solve();
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