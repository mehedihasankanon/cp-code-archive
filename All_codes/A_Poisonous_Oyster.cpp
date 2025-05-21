// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc393/tasks/abc393_a
// status  : ok
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    string s, t; cin >> s >> t;

    if(s == "sick")
    {
        if(t == "sick")
        {
            cout << 1 << nl;
        }
        else 
        {
            cout << 2 << nl;
        }
    }
    else
    {
        if(t == "sick")
        {
            cout << 3 << nl;
        }
        else
        {
            cout << 4 << nl;
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