// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc257/tasks/abc257_e
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

bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.first < b.first || (a.first == b.first && a.second > b.second);
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    // vector<ll> c(10), mx(10,0), cnt(10,0);

    // forn(i,1,n+1)
    // {
    //     cin >> c[i]; 
    //     mx[i] = n / c[i];
    // }

    // vector<pair<ll,ll>> v(10);

    // forn(i,1,n+1)
    // {
    //     ll x; cin >> x;
    //     v[i] = {x,i};
    // }

    // sort(v.begin() + 1, v.end(), comp);

    // ll bdg = n;


    

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