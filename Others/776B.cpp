// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/776/problem/B
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

vector<bool> prime(1e5+10,true);
// vector<ll> primes 
void Pre(void)
{
    prime[1] = false;
    for(ll i = 4; i <= 1e5 + 10; i+= 2) prime[i] = false;
    for(ll i = 3; i < 1e5 + 10; i+= 2)
    {
        if(prime[i]) for(ll j = i*i; j <= 1e5 + 10; j += i) prime[j] = false;
    }
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    // edge cases
    if(n == 1) {cout << 1 << NL << 1 << NL; return;}
    if(n == 2) {cout << 1 << NL << "1 1" << NL; return;}
    // vector<ll> v(n);
    // forn(i,0,n) v[i] = i+2;

    cout << 2 << NL;
    forn(i,2,n + 2) {if(prime[i]) cout << 1 << " "; else cout << 2 << " ";} 

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