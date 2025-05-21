// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/330/problem/B
// status  : AC ***editorial***
     
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
ll INF = LONG_LONG_MAX;
    
#define DBG(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    ll n; cin >> n;
    ll m; cin >> m;
    vector<bool> v(n+1,true);
    
    forn(i,0,m) {
        ll x, y; cin >> x >> y;
        v[x] = false; v[y] = false;
    }

    cout << n - 1 << NL;

    ll center;
    forn(i,1,n+1) if(v[i]) {
        center = i;
        break;
    }

    forn(i,1,n+1) {
        if(i != center) {
            cout << center << " " << i << NL;
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