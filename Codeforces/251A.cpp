// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/251/problem/A
// status  : TLE AC

// the cnt function was doing issue. i understood it would, 
// but didnt give it much attention. gotta do it from now on

     
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

ll cnt(vector<ll> &v, ll st, ll en)
{
    ll lo = st, hi = en, ans = 0;
    while(lo < hi)
    {
        ans += hi - lo - 1;
        // dbg(ans);
        lo++;
    }
    return ans;
}
    
    
void Solve(ll test)
{
    ll n, d; cin >> n >> d;
    if(n <= 2) 
    {
        cout << 0 << NL;
        return;
    }
    
    vector<ll> v(n);
    forn(i,0,n) cin >> v[i];

    ll hi = 2, lo = 0, ans = 0;
    while(hi < n)
    {
        // while(v[hi] - v[lo] > d) lo++;
        // while(lo < hi)
        // {
        //     ans += hi - lo - 1;
        //     lo++;
        // }
        // hi++;


        lo = lower_bound(v.begin(),v.end(),v[hi] - d) - v.begin();
        while(v[hi] - v[lo] > d) lo++;
        // dbg(hi);
        // dbg(lo);
        // dbg(ans);
        if(lo < hi) ans += ((hi - lo) * (hi - lo - 1)) / 2;
        hi++;


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

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr);

//     ll n, d; 
//     cin >> n >> d;
//     if (n <= 2) {
//         cout << 0 << "\n";
//         return 0;
//     }

//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++) cin >> v[i];

//     ll hi = 2, lo = 0, ans = 0;
//     while (hi < n) {
//         lo = lower_bound(v.begin(), v.end(), v[hi] - d) - v.begin();
//         if (lo < hi) ans += ((hi - lo) * (hi - lo - 1)) / 2;
//         hi++;
//     }

//     cout << ans << "\n";
//     return 0;
// }
