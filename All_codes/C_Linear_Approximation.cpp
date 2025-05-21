// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc102/tasks/arc100_a
// status  : 
     
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
    
#define DBG(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   

// ll sadness(vector<ll>& v,ll mid)
// {
//     ll chk = 0;
//     forn(i,0,v.size())
//     {
//         chk += abs(v[i] - mid);
//     }
// }
    
    
void Solve(ll test) {
    ll n; cin >> n;
    vector<ll> v(n);
    ll mx = 0, mn = 2e18;
    forn(i,0,n) 
    {
        cin >> v[i];
        v[i] -= i+1;
        // mn = min(mn,v[i]);
        // mx = max(v[i],mx);
    }

    sort(v.begin(),v.end());

    ll med;
    if(n&1) med = v[n/2];
    else med = (v[(n-1)/2] + v[1+((n-1)/2)])/2;

    // DBG(med);

    ll ans = 0;
    forn(i,0,n)
    {
        ans += abs(v[i] - med);
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