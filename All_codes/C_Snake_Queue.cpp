// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc389/tasks/abc389_c
// status  : AC
     
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
    ll q; cin >> q;
    vector<pair<ll,ll>> v;
    ll pos = 0, move = 0;
    forn(i,0,q)
    {
        ll typ; cin >> typ;
        if(typ == 1)
        {
            ll l; cin >> l;
            if(v.empty()) v.push_back({0,l});
            else v.push_back({v.back().first+v.back().second, l});
        }
        else if(typ == 2)
        {
            move += v[pos].second;
            pos++;
        }
        else 
        {
            ll k; cin >> k;
            cout << v[pos+k-1].first - move << NL;
        }
    }
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