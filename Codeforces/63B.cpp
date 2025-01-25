// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/63/problem/B
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
ll INF = LONG_LONG_MAX;
    
#define DBG(x) cout << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    ll cnt = 0;
    forn(i,0,n) {
        cin >> v[i];
    }

    while(v[0] < k) {
        ll curr = v[0];
        forn(i,0,n) {
            while(i < n && v[i] == curr) i++;
            i--;
            v[i]++;
            if(i < n-1) curr = v[i+1];
        }
        cnt++;
    }
    cout << cnt << NL;
    return;


    return;


}   
    
int main()
{   
    // freopen("input.in",   "r", stdin);
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