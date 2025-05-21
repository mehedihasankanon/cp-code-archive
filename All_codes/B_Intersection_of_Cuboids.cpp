//Bismillahir Rahmanir Rahim
     
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    
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
    ll a, b, c, d, e, f, g, h, i, j, k, l; 
    /*
    [a b c]
    [d e f]

    [g h i]
    [j k l]
    */
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

    /*//first cube er vitor second cube : 
    if(((a < g && g < d) && (b < h && h < e) && (c<i&&i<f)) || ((a < j && j < d) && (b < k && k < e) && (c<l&&l<f))) cout << "Yes";
    //second cube er vitor first cube :
    else if(((g < a && a < j) && (h < b && b < k) && (i<c&&c<l)) || ((g < d && d < j) && (h < e && e < k) && (i<f&&f<l))) cout << "Yes";
    //nai
    else cout << "No";*/

    if(max(a,g)<min(d,j) && max(b,h)<min(e,k) && max(c,i)<min(f,l)) cout << "Yes";
    else cout << "No";
    return;

}
    
int main()
{   
    /*freopen(“input.txt”, “r”, stdin);
    freopen(“output.txt”,”w”, stdout);*/
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