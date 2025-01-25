// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/Yosupo-static_range_frequency
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
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n, q; cin >> n >> q;
    unordered_map<ll,vll> mp;
    forn(i,0,n)
    {
        ll x; cin >> x;
        mp[x].push_back(i);
    }

    forn(i,0,q)
    {
        ll ql, qr, qn; cin >> ql >> qr >> qn;
        if(mp[qn].empty()) 
        {
            cout << 0 << nl;
            continue;
        }
        else
        {
            auto it1 = lower_bound(mp[qn].begin(), mp[qn].end(), ql);
            auto it2 = upper_bound(mp[qn].begin(), mp[qn].end(), qr-1);
            // cout << "l " << it1-mp[qn].begin() << nl << "r " << it2-mp[qn].begin() << nl;

            cout << it2-it1 << nl;
        }

    }

}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   