// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2052/problem/A
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

bool comp (pair<ll,ll> p1, pair<ll,ll> p2)
{
    if(p1.second < p2.second) return true;
    else if(p1.second == p2.second && p1.first < p2.first) return true;
    return false;
}
    
    
void Solve(ll test)
{
    // ll n; cin >> n;
    // // if(n == 1)
    // // {
    // //     cout << 0 << NL;
    // //     return;
    // // }
    // vector<ll> v(n);
    // forn(i,0,n) cin >> v[i];


    // vector<pair<ll,ll>> ov;
    // forn(i,0,n)
    // {
    //     forn(j,i+1,n)
    //     {
    //         ov.push_back({v[i],v[j]});
    //         if(v[i] < v[j])
    //         {
    //             ov.push_back({v[j], v[i]});
    //         }
    //     }
    // }

    // cout << ov.size() << NL;
    // sort(ov.begin(),ov.end(),comp);
    // for (auto [u,v] : ov)
    // {
    //     cout << u << " " << v << NL;
    //     // return;
    // }
    // return;





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