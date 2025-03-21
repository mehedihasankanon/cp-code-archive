// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2075/problem/C
// 
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
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
    ll n, m; cin >> n >> m;
    vector<ll> v(m+1);
    forn(i,0,m) {cin >> v[i]; v[i] = min(v[i],n - 1);}
    v[m] = -1;

    sort(v.begin(),v.end());
    vector<ll> pref(m+2,0);
    pref[0] = 0;
    forn(i,1,m+1) pref[i] = pref[i - 1] + v[i];
    dbgc(pref);

    ll ans = 0;
    forr(i,m,1)
    {
        ll t = n - v[i];
        dbg(t);
        ll pt = lower_bound(v.begin(),v.end(),t) - v.begin() - 1;

        dbg(pt);
        // dbg(v[i]);
        // dbg(v[i] + pref[n] - pref[pt] - n + 1)
        ans += v[i] + pref[m] - pref[pt] - n + 1;
    }

    cout << ans << nl;

    
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