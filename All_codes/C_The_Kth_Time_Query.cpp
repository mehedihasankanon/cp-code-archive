// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc235/tasks/abc235_c
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
    map<ll,vector<ll>> indices;

    ll n, k; cin >> n >> k;
    
    forn(i,1,n+1)
    {
        ll x; cin >> x;
        indices[x].push_back(i);
    }

    forn(i,0,k)
    {
        ll q, p; cin >> q >> p;
        // dbg(indices[q].size());
        if(p > indices[q].size())
        {
            cout << -1 << NL;
        }
        else
        {
            cout << indices[q][p-1] << NL;
        }
    }
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