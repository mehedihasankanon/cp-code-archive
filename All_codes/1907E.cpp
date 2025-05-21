// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/1907/problem/E
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
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
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

// ll ds(ll n)
// {
//     ll ans = 0;
//     while(n)
//     {
//         ans += n % 10;
//         n /= 10;
//     }
//     return ans;
// }
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    // ll d = ds(n);

    // ll ans = 0;

    // forn(i,0,1010)
    // {
    //     forn(j,0,1010)
    //     {
    //         if(ds(i) + ds(j) + ds(n - i - j) == d)
    //         {
    //             ans += 6;
    //             if(i == j)
    //             {
    //                 if(j == n - i - j)
    //                 {
    //                     ans -= 5;
    //                 }
    //                 else
    //                 {
    //                     ans -= 3;
    //                 }
    //             }
    //             else
    //             {
    //                 if(j == n - i - j)
    //                 {
    //                     ans -= 3;
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout << ans << nl;


    ll ans = 1;
    while(n)
    {
        ll d = n % 10, temp = 0;
        forn(i,0,d + 1) forn(j,0,d + 1) temp += ((d - i - j) >= 0);
        ans *= temp;
        n /= 10;
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