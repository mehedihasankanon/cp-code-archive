// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1324/problem/D
// status  : wa * 9 ac

// 
// 
     
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

// bool comp (pair<ll,ll> a, pair<ll,ll> b)
// {
//     return a.first - a.second > b.first - b.second;
// }
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    // wrong
    // vector<pair<ll,ll>> v(n);
    // forn(i,0,n) cin >> v[i].first;
    // forn(i,0,n) cin >> v[i].second;

    // // sort(v.begin(),v.end(),comp);
    // vector<ll> v1(n); forn(i,0,n) v1[i] = v[i].first - v[i].second;

    // sort(v1.begin(),v1.end(),greater());
    // // forn(i,0,n) dbg(v1[i]);
    // ll ans = 0;
    // ll l = 0, r = 1;
    // while(r < n && l < n)
    // {
    //     if(v1[l] + v1[r] <= 0) break;
    //     while(l < n - 1 && r < n - 1 && v1[l] + v1[r] > 0) r++;
    //     ans += r - l;
    //     l++;
    // } 

    // cout << ans << NL;

    if(n == 1)
    {
        cout << 0 << NL;
        return;
    }


    vector<ll> v(n,0);

    forn(i,0,n) cin >> v[i];
    forn(i,0,n)
    {
        ll x; cin >> x; v[i] -= x;
    }
    sort(v.begin(),v.end());

    auto lo = v.begin(), hi = v.begin() + 1;

    while(hi < v.end() && *hi + *lo <= 0) hi++;
    ll ans = n - (hi - v.begin());
    lo++;


    // while(hi > lo)
    // {
    //     bool change = false;
    //     while(hi > v.begin() && hi > lo && *hi + *lo > 0) {hi--; change = true;}
    //     if(change) while(hi < v.end() && (hi <= lo || *hi + *lo <= 0)) hi++;
    //     ans += n - (hi - v.begin());
    //     // dbg(ans);
    //     lo++;
    //     if(lo == v.end())
    //     {
    //         cout << ans << NL;
    //         return;
    //     }
    // }

    // ll t = n - (hi - v.begin()) - 1;
    // // dbg(t);
    // ans += (t * (t + 1))/2;

    while(lo < v.end() - 1)
    {
        if(hi == v.end()) hi--; // how tf did i miss this aaaaaarghhh
        while(hi > lo && *hi + *lo > 0) hi--; // got tle here. at least the code worked
        while(hi < v.end() && !(hi > lo && *hi + *lo > 0)) hi++;

        ans += n - (hi - v.begin());
        lo++;
    }

    cout << ans << NL;


    return;
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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