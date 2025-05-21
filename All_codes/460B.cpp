// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/460/problem/B
// status  : WA ***editorial*** -> AC



/*
    SOMETIMES IT IS BETTER TO APPROACH FROM THE BACK RATHER THAN 
    THE FRONT
    IN THIS CASE, IT ISNT POSSIBLE TO DO 1E9 IN LINEAR TIME
    HENCE WE HAD TO LOOK FOR ANOTHER APPROACH

*/
     
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

ll pwr(ll a, ll b) {
    ll ret = 1;
    while(b--) ret *= a;
    return ret;
}

ll s(ll a) {
    ll ret = 0;
    while(a > 0) {
        ret += a%10;
        a /= 10;
    }
    return ret;
}

    
    
void Solve(ll test) {
    ll a, b, c; cin >> a >> b >> c;
    vector<ll> ans;
    forn(Sx,1,82) {
        ll x = b * pwr(Sx,a) + c;
        if(x < 1000000000LL && s(x) == Sx) {
            ans.push_back(x);
        }
    }
    cout << ans.size() << NL;
    for(auto x : ans) cout << x << " ";
    cout << NL;
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