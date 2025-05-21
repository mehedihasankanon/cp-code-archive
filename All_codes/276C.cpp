// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/276/problem/C
// status  : AC :)) yeay
     
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
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    forn(i,0,n) cin >> v[i];
    sort(v.begin(),v.end(), greater());

    vector<ll> cnt(n,0), pref(n + 2, 0);
    forn(i,0,q)
    {
        ll x, y; cin >> x >> y;
        pref[x]++; pref[y+1]--;
    }
    ll cn =0;
    forn(i,1,n + 1)
    {
        cn += pref[i];
        cnt[i - 1] += cn;
    }

    sort(cnt.begin(),cnt.end(),greater());

    ll ans = 0;
    forn(i,0,n)
    {
        ans += cnt[i] * v[i];
    }

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