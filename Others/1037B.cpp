// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1037/problem/B
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
    
#define DBG(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    ll n, s; cin >> n >> s;
    vector<ll> v(n);
    forn(i,0,n) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    if(v[n/2] == s) {
        cout << 0 << NL;
        return;
    }
    else if(v[n/2] > s) {
        ll ans = 0;
        for(ll i = n/2; i >= 0 && v[i] > s; i--) {
            ans += v[i] - s;
        }
        cout << ans << NL;
        return;
    }
    else {
        ll ans = 0;
        for(ll i = n/2; i < n && v[i] < s; i++) {
            ans += s - v[i];
        }
        cout << ans << NL;
        return;
    }
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