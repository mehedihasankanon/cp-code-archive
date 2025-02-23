// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1372/problem/C
// status  : ***had to check WAs***
     
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
    forn(i,0,n) cin >> v[i];

    bool fl = true, fl1 = true;
    forn(i,0,n) {if(v[i] != i + 1) {fl = false; break;}}

    if(fl)
    {
        cout << 0 << NL;
        return;
    }

    // bool fl1 = true;

    if(v[0] == 1 || v[n - 1] == n)
    {
        ll lo = 0; while(v[lo] == lo + 1) lo++;
        // dbg(lo);
        // lo--;
        ll hi = n - 1; while(v[hi] == hi + 1) hi--;
        // dbg(hi);
        // hi++;

        bool fl = false;
        while(hi > lo)
        {
            if(v[hi] == hi + 1 || lo + 1 == v[lo])
            {
                // dbg(hi); dbg(lo);
                fl = true; break;
            }
            hi--; lo++;
        }
        if(hi == lo && v[lo] == lo + 1) fl = true;
        if(fl) 
        {
            cout << 2 << NL;
            return;
        }
        cout << 1 << NL;
        return;

    }

    forn(i,0,n) if(v[i] == i + 1) {fl1 = false; break;}
    if(fl1)
    {
        cout << 1 << NL;
        return;
    }
    cout << 2 << NL;
    return;


    // ll cnt = 0, idx = 0;
    // bool con = 0, fl = 1;
    // while(idx < n)
    // {
    //     if(v[idx] == idx + 1)
    //     {
    //         if(!con) {con = true; cnt++;}
    //         // dbg(idx);
    //         // if()
    //     }
    //     else
    //     {
    //         fl = 0;
    //         con = 0;
    //     }
    //     idx++;
    // }

    // // cout << 2 << NL;
    // // cout << 0 + !fl + (cnt > 1) << NL;
    // if(fl)
    // {
    //     cout << 0 << NL;
    //     return;
    // }
    // else
    // {
    //     // dbg(cnt);
    //     if(cnt <= 1)
    //     {
    //         cout << 1 << NL;
    //         return;
    //     }
    //     cout << 2 << NL;
    //     return;
    // }
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   