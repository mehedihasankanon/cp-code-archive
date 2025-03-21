// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2075/problem/B
// editorial
    
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
    
    
void Solve(ll test)
{
    ll n, k; cin >> n >> k;
    vector<ll> v(n); forn(i,0,n) cin >> v[i];
    if(n == 2)
    {
        cout << v[0] + v[1] << nl;
        return;
    }


    if(k == 1)
    {
        ll mx = v[1];
        forn(i,1,n-1) mx = max(v[i],mx);
        cout << max(mx + max(v[0],v[n - 1]), v[0] + v[n - 1]) << nl;
        return;
    }

    sort(v.begin(),v.end(),greater());
    // cout << (ll)accumulate(v.begin(),v.begin()+k+1,0) << nl;
    ll ans = 0;
    forn(i,0,k+1) ans += v[i];
    cout << ans<< nl;
    return; 


    // vul shobi vul

    // ll mx = 0, mx1, mx2;
    // vector<ll> pref(n + 2,0);
    // forn(i,1,n+1) pref[i] = v[i - 1] + pref[i - 1];
    // forn(i,0,n) 
    // {
    //     if(v[i] > v[mx]) mx = i;
    //     else if(v[i] == v[mx])
    //     {
    //         ll d1 = abs(pref[mx - 1] - pref[n - mx]), d2 = abs(pref[i - 1] - pref[n - i]);
    //         if(d1 > d2) mx = i; 
    //     }
    // }
    // if(mx == 0)
    // {
    //     ll ans = v[0];
    //     sort(v.begin() + 1, v.end(), greater());
    //     ll idx = 1;
    //     while(idx < n && k > 0) ans += v[idx++],k--;
    //     cout << ans << nl;
    //     return;
    // }
    // if(mx == n-1)
    // {
    //     ll ans = v[n-1];
    //     sort(v.begin(),v.end()-1,greater());
    //     ll idx = 0;
    //     while(idx < n-1 && k > 0) ans += v[idx++],k--;
    //     cout << ans << nl;
    //     return;
    // }

    // mx1 = 0;
    // forn(i,0,mx)
    // {
    //     mx1 = v[i] > v[mx1] ? i : mx1;
    // }
    // mx2 = mx + 1;
    // forn(i,mx+1,n)
    // {
    //     mx2 = v[i] > v[mx2] ? i : mx2;
    // }

    // ll ans = v[mx] + v[mx1] + v[mx2];
    // dbg(mx); dbg(mx1); dbg(mx2);
    // vector<ll> u;
    // forn(i,0,n)
    // {
    //     if(i == mx || i == mx1 || i == mx2) continue;
    //     u.push_back(v[i]);
    // }

    // dbgc(u);
    // sort(u.begin(),u.end(),greater());
    // k -= 2;
    // forn(i,0,k) ans += u[i];
    // cout << ans << nl;

    // vector<pair<ll,ll>> u;
    // forn(i,0,n) u.push_back({v[i],i});
    // sort(u.begin(),u.end(), greater());
    // ll sum = 0;
    // ll mn = n, mx = -1; 
    // forn(i,0,k)
    // {
    //     sum += u[i].first;
    //     v[u[i].second] = -1;
    //     mn = min(mn,u[i].second);
    //     mx = max(mx,u[i].second);
    // }
    // dbgc(v);

    // ll t = 0;
    // // forr(i,mn - 1,0) t = max(t,v[i]);
    // // forn(i,mx+1,n) t = max(t,v[i]);
    // forn(i,mn,mx) t = max(t,v[i]);
    // if(mn == 0)
    // {
    //     if(mx == n - 1) cout << sum + t << nl;
    //     else cout << sum + max(t,v[n - 1]) << nl;
    // }
    // else
    // {
    //     if(mx == n - 1) cout << sum + max(t,v[0]) << nl;
    //     else cout << sum + max(t,max(v[0],v.back())) << nl;
    // }


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