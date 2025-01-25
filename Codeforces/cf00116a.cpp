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
#define fast_cin()              ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF                     2e18
#define forn(i,e)               for(ll i = 0; i < e; i++)
#define forsn(i,s,e)            for(ll i = s; i < e; i++)
#define rforn(i,s)              for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e)           for(ll i = s; i >= e; i--)

#define sf(x)                   scanf("%lld", &x)
#define sf2(x,y)                scanf("%lld %lld", &x, &y)
#define sf3(x,y,z)              scanf("%lld %lld %lld", &x, &y, &z)
#define sf4(x,y,z,t)            scanf("%lld %lld %lld %lld", &x, &y, &z, &t)
#define pfi(x)                  printf("%lld", x)
#define pfc(x)                  printf("%c", x)
#define pnl                     printf("\n")
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
    ll cap = 0, num = 0, in, out;
    forn(i,n)
    {
        cin >> out >> in;
        num = num - out + in; //dbg(num);
        cap = max(num,cap); //dbg(cap);
        //if(cap - out + in > cap) cap = cap - out + in;
    }
    cout << cap;
}
    
int main()
{   
    fast_cin();
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