// Bismillahir Rahmanir Rahim
     
     
// link: https://codeforces.com/contest/350/problem/A
// status: wa wa wa wa wa ac | ac
     
     
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
    ll c, w; cin >> c >> w;
    multiset<ll> ca, wa;
    forn(i,c) 
    {
        ll x; cin >> x; ca.insert(x);
    }
    forn(i,w)
    {
        ll x; cin >> x; wa.insert(x);
    }

    // to pass 2,and 4, need to take at least last element of ca.
    ll ans = *ca.rbegin();

    if(ans >= *wa.begin()) 
    {
        cout << "-1" << nl;
        return;
    }

    // to pass 3, need to see if ans is greater than or equal to 2 * the least element of ca
    if(ans >= 2**ca.begin()) 
    {
        cout << ans << nl;
        return;
    }
    else
    {
        ans = 2**ca.begin(); // ans needs to be at least that
        if(ans < *wa.begin()) // needs to pass 4
        {
            cout << ans << nl;
            return;
        }
        else 
        {
            cout << "-1" << nl; 
            return;
        }
    }

    /*
        lessons:
            - AMI EKTA GADHA
            - AMI KISU PARI NA
            - AMARE DIYA KISU HOBE NA
            - CP PARI NA AMARE KEDA JOB DIBO
            ---------------
                I AM GOING TO BE HOMELESS AAAAAAAAAAAAAAAAAAAAA
            ---------------
    */

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