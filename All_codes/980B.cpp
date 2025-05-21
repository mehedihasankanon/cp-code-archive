// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/980/problem/B
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
    vector<string> g(4,string(n,'.'));

    ll k; cin >> k;
    if(k & 1)
    {
        // yes always
        // if(k > n - 1)
        // {
        //     cout << "NO" << NL;
        //     return;
        // }
        // else
        // {
        //     g[1][n/2] = '#';
        //     k--;
        //     ll t = 1;
        //     while(k)
        //     {
        //         g[1][n/2 - t] = '#';
        //         g[1][n/2 + t] = '#';
        //         k -= 2;
        //         t++;
        //     }
        // }

        if(k <= n - 2)
        {
            g[1][n/2] = '#';
            k--;
            ll t = 1;
            while(k)
            {
                g[1][n/2 - t] = '#';
                g[1][n/2 + t] = '#';
                k -= 2;
                t++;
            }
        }
        else
        {
            ll p = n - 2;
            k -= p;
            g[1][n/2] = '#';
            p--;
            ll t = 1;
            while(p)
            {
                g[1][n/2 - t] = '#';
                g[1][n/2 + t] = '#';
                p -= 2;
                t++;
            }

            t = 1;
            while(k)
            {
                g[2][n/2 - t] = '#';
                g[2][n/2 + t] = '#';
                k -= 2;
                t++;
            }
        }
    }
    else
    {
        ll t = 1;
        while(k)
        {
            g[1][t] = '#';
            g[2][t] = '#';
            k -= 2;
            t++;
        }
    }
    cout << "YES" << NL;
    forn(i,0,4) cout << g[i] << NL;
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