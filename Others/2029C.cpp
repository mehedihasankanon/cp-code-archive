// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2029/problem/C
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

    // wrong ========================================================
    // ll n ;cin >> n;
    // vector<ll> pref(n + 1);
    // pref[0] = 0;

    // forn(i,1,n+1)
    // {
    //     ll x;cin >> x;
    //     if(x > pref[i - 1]) pref[i] = pref[i - 1] + 1;
    //     else if(x == pref[i - 1]) pref[i] = pref[i - 1];
    //     else pref[i] = pref[i - 1] - 1;
    // }

    // vector<ll> ratings;
    // ll last = pref.back();
    // ratings.push_back(last);

    // ll idx = 1, min = 0;
    // // cerr << "---------------" << NL;
    // while(idx <= n)
    // {
    //     if(pref[idx] <= pref[idx - 1])
    //     {
    //         while(idx <= n && pref[idx] <= pref[idx - 1])
    //         {
    //             if(pref[idx] < pref[idx - 1])min++;
    //             idx++;
    //         }
    //         // dbg(idx); dbg(min);
    //         ratings.push_back(last + min);
    //         min = 0;
    //     }
    //     else
    //     {
    //         idx++;
    //     }
    // }

    // if(ratings.size() == 1)
    // {
    //     cout << last - 1 << NL;
    //     return;
    // }
    // sort(ratings.begin(),ratings.end(),greater());
    // cout << *ratings.begin() << NL;
    // ====================================================================


    ll n; cin >> n;
    vector<ll> v(n);
    forn(i,0,n) cin >> v[i];

    ll lo = 0, hi = n + 1;
    while(hi > lo + 1)
    {
        ll mid = (lo + hi)/2;

        ll t = 0;
        forn(i,0,n)
        {
            if(v[i] > t) t++;
            // else if(v[i] < t) t--;
            // :) aar pari na
        }

        if(t >= mid) lo = mid;
        else hi = mid;
    }

    cout << lo << NL;
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