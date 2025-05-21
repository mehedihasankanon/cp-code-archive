// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc262/tasks/abc262_c
// status  : ***editorial***
     
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
    ll n; cin >> n;
    vector<ll> v(n);
    ll n1 = 0;
    forn(i,0,n) 
    {
        cin >> v[i];
        if(v[i] == i + 1) n1++;
    }

    // ll n2 = 0;
    // forn(i,0,n)
    // {
    //     if(v[v[i] - 1] == v[i]) n2++;
    //     // dbg(v[v[i] - 1]);
    // }
    // // dbg(n2);
    // cout << n2/2 + (n1 * n1 - n1)/2 << NL;
    // return;

    ll n2 = 0;
    forn(i,0,n)
    {
        // if(v[v[i] - 1] == i + 1 && v[i] == v[v[i] - 1] - 1)
        if(v[i] > i + 1 && v[v[i] - 1] == i + 1) n2++; 
    }
    cout << n2 + (n1 * n1 - n1)/2 << NL;
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