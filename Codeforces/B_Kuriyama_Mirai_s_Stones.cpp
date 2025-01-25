// Bismillahir Rahmanir Rahim
     
     
// link: https://codeforces.com/contest/433/problem/B
// status: tle re ac
     
     
#pragma GCC optimize("O1,O2,O3")
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
    
ll MOD = 1000000007; // 998244353
ld eps = 1e-12;
    
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
    vector<ll> uns, s;
    forn(i,n)
    {
        ll x; cin >> x;
        uns.push_back(x); s.push_back(x);
    } 
    sort(s.begin(),s.end());

    // prefix sum calc
    vector<ll> psu(n+1), pss(n+1);
    psu[0] = 0; pss[0] = 0;
    forsn(i,1,n+1)
    {
        psu[i] = psu[i-1] + uns[i-1];
        pss[i] = pss[i-1] + s[i-1];
    }

    /*
        lessons:
            - prefix sum indentation carefully kora lagbe
            - ami ekta gadha, kissu pari na
    */

    ll m;
    cin >> m;
    forn(i,m)
    {
        ll q, l, r, ans = 0;
        cin >> q >> l >> r;
        
        if (q == 1) cout << psu[r] - psu[l-1] << nl;
        else cout << pss[r] - pss[l-1] << nl;
    }

    return;
}   
    
int main()
{   
    fastio;
    ll t = 1;
    //cin >> t;
    
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