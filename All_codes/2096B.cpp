// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2096/problem/B
// ac
    
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
    
bool comp(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b)
{
    return a.first > b.first;
}
    
void Solve(ll test)
{
    ll n,k ; cin >> n >> k;

    vector<ll> l(n), r(n);
    forn(i,0,n) cin >> l[i];
    forn(i,0,n) cin >> r[i];


    vector<ll> mx(n), mn(n);
    forn(i,0,n)
    {
        mx[i] = max(l[i], r[i]);
        mn[i] = min(l[i], r[i]);
    }

    // ll ans = accumulate(mx.begin(),mx.end(),0LL);
    // ans += accumulate(mn.begin(),mn.begin() + k, 0LL);

    ll ans =0;
    forn(i,0,n) ans += mx[i];
    sort(mn.begin(),mn.end(),greater());
    forn(i,0,k-1) ans += mn[i]; 

    cout << ans + 1<< nl;
    return;

    // sort(l.begin(),l.end(),greater());
    // sort(r.begin(),r.end(),greater());

    // ll l1 = 0, r1 = 0;
    // forn(i,0,n) l1 += l[i], r1 += r[i];

    // if(l1 > r1)
    // {
    //     ll ans = l1;
    //     forn(i,0,k-1) ans += r[i];
    //     cout << ans + 1 << nl;
    //     return;
    // }
    // else if(r1 > l1)
    // {
    //     ll ans = r1;
    //     forn(i,0,k-1) ans +=l[i];
    //     cout << ans + 1 << nl;
    //     return;
    // }
    // else
    // {
        
    // }

    // if(l1 > r1)
    // {
    //     ll ans = l1+r1;
    //     forn(i,k,n) ans += r.back();
    //     cout << ans << nl;
    //     return;
    // }

    // else if(r1 > l1)
    // {
    //     ll ans = r1 + l1;
    //     forn(i,k,n) ans += l.back();
    //     cout << ans << nl;
    //     return;
    // }

    // else
    // {
    //     ll ans = r1 + l1;
    //     forn(i,k,n) ans += max(l.back(),r.back());
    //     cout << ans << nl;
    //     return;
    // }



    // vector<pair<ll,pair<ll,ll>>> v(n);

    // forn(i,0,n) cin >> v[i].second.first, v[i].first = v[i].second.first;
    // forn(i,0,n) cin >> v[i].second.second, v[i].first += v[i].second.second;

    // sort(v.begin(),v.end(),comp);

    // // for(auto x : v)
    // // {
    // //     cerr << x.first << " " << x.second.first << " " << x.second.second << nl;
    // // }
    // // cerr << nl;

    // ll ans = 0;
    // forn(i,0,k) ans += v[i].first;
    
    // cout << ans - k + 1 << nl;
    // return;



    // vector<ll> v(n);
    // forn(i,0,n) cin >> v[i];
    // forn(i,0,n)
    // {
    //     ll x; cin >> x;
    //     v[i] = min(x,v[i]);
    // }

    // sort(v.begin(),v.end(),greater());
    // ll ans = 0;
    // forn(i,0,k) ans += v[i];
    // cout << ans << nl;
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