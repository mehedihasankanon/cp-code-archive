// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/Gym-331108H
// status  : ac
     
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
    
#define DBG(x)                  cerr << #x << " " << x << "\n"
#define NL                      "\n"
#define forn(i,s,e)              for(ll i = s; i < e; i++)
#define rfor(i,s,e)             for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    ll n, ans = 0; cin >>n;
    string s1, s2; cin >> s1 >> s2;
    bool nomatch = false;
    forn(i,0,n) {
        if(s1[i] != s2[i]) {
            if(!nomatch) {
                nomatch = true;
                ans++;
            } 
        } else {
            nomatch = false;
        }
    }
    cout << ans << NL;
    return;
}   
    
int main()
{   
	// freopen("breedflip.in", "r", stdin);
	// freopen("breedflip.out", "w", stdout);
    
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