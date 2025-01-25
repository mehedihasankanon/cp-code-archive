// Bismillahir Rahmanir Rahim
     
     
// status: wa ac
     
     
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
    
ll f(ll x, ll k)
{
    for(ll i = x; ;i++)
    {
        if(i%k==0) return i-x;
    }
}


void solve()
{   
    ll n, k; cin >> n >> k;
    

    /*
        lessons:
            - be careful considering all the cases
            - keep it simple and easy
            - take your time building the algo
    */
    if(k == 4)
    {
        
        /*
        cases
            - divisible by 4 found : ans zero
            - two or more even nums : ans zero
            - one even num : ans 1
            - zero even num :
                - 4k - 1 odd num : ans 1
                - one odd num : ans f(num,k) -> not possible
                - more than one odd : ans 2
        */

        ll even = 0, ans = MOD; bool fl = false; vector<ll> odd; 
        forn(i,n)
        {
            ll x; cin >> x;
            if(x%4==0) ans = 0;
            else if(x%2==0) even++;
            else odd.push_back(x);

            if(x+1%4==0) fl = true;
        }

        if(ans != 0)
        {    
            if(even >= 2) ans = 0;
            else if(even == 1) ans = 1;
            else 
            {
                for(auto x : odd)
                {
                    ans = 2;
                    if((x+1)%4==0)
                    {
                        ans = 1;
                        break;
                    }
                }
            }
        }
        cout << ans << nl;
    }
    else
    { 
        ll ans = MOD;
        forn(i,n)
        {
            ll x; cin >> x;
            //dbg(x);
            ans = min(ans, f(x,k)); //dbg(ans);
        }
        cout << ans << nl;
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

