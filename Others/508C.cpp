// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/508/problem/C
// status  : lots of wa, but solved it

     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, t, r; cin >> n >> t >> r;
    if (t < r)
    {
        cout << -1 << NL;
        return;
    }

    // vector<pair<bool,ll>> v(301,{0,0});
    vector<ll> visit, cnt(601,0);
    forn(i,0,n)
    {
        ll x; cin >> x;
        visit.push_back(x);
        // v[x].first = true;
    }

    ll ans = 0;
    for(auto x : visit)
    {
        if(r > cnt[x])
        {
            ans += r - cnt[x];
            ll p = r - cnt[x];
            ll i;
            for(i = x;i <= 600 && i <= x - p + t; i++) cnt[i] += p;
            // ll t = r - cnt[x] - 1;
            p--;
            for(;i <= 600 && p > 0;) cnt[i] += p--, i++;
        }
    }

    // forn(i,0,301) cerr << i << " " << cnt[i] << NL;

    cout << ans << NL;
    return;

}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   