// Bismillahir rahmanir rahim
    
// https://www.codechef.com/START186C/problems/DISTARR
// ac
    
#pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
// ll mod = 1000000007;
ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
// #define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    
    // wrong approach
    // ll ans = 1;
    // map<ll,ll> mp;
    // forn(i,0,n)
    // {
    //     ll t; cin >> t;
    //     ans *= (t - mp[t]);
    //     ans %= mod;
    //     mp[t]++;
    // }

    // cout << ans << nl;

    vector<ll> v(n);
    forn(i,0,n) cin >> v[i];

    sort(v.begin(),v.end());

    ll t = 0, ans = 1;
    forn(i,0,n)
    {
        ans *= (v[i] - t);
        ans %= mod;
        t++;
    }

    cout << ans << nl;


    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   