// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1612/problem/C
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

#define pnl                     cout << nl
#define eb                      emplace_back
#define mp                      make_pair
#define pb                      push_back
#define fi                      first
#define se                      second
#define all(x)                  (x).begin(), (x).end()
#define sz(x)                   ((ll)(x).size())

ll testcase = 1;



void Solve(ll test)
{   
    ll k, n; cin >> k >> n;
    if(n >=k*k)
    {
        cout << 2*k-1 << nl;
        return;
    }
        if(2*n == k*k + k)
        {
            cout << k << nl; return;
        }
        else if(2*n > (k*k + k))
        {
            //cout << "c1" << nl;
            ll emotes = (k*k); 
            ll l = 0, r = k-1, mid;
            while(r > l+1)
            {
                mid = (l+r)/2;
                if(emotes - (mid*mid+mid)/2 >= n) l = mid;
                else r = mid;
                //dbg(l); dbg(r);
            }
            cout << 2*k-1-l << nl;
        }
        else
        {
            //cout << "c2" << nl;
            ll l = 0, r = k, mid;
            while(r > l+1)
            {
                mid = (l+r)/2;
                if(mid*mid+mid<2*n) l = mid;
                else r = mid;
            }
            cout << r << nl;
            return;
        }
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   