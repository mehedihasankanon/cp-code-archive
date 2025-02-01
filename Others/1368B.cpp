// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2049/problem/C
// status  : **editorial**
     
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


// vector<ll> pwrs;
void Pre(void)
{
    
    // cerr << powl(40.0,10.0);
    // 40 it is!

    // pwrs.push_back(0);
    // forn(i,1,41) 
    // {
    //     ll p = 9, b = i;
    //     while(p--) b *= i;
    //     // dbg(b);
    //     // cerr << NL;
    //     pwrs.push_back(b);
    //     // if(b >= 0) pwrs.push_back(b);
    // }

    // for(auto x : pwrs) dbg(x);

    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;

    string s = "codeforces";
    if(n == 1)
    {
        cout << "codeforces" << NL;
        return;
    }

    vector<ll> v(10,1);
    ll p = 1;

    while(p < n)
    {
        forn(i,0,10)
        {
            if(p >= n) break;
            p /= v[i];
            v[i]++;
            p *= v[i];
        }
    }

    forn(i,0,10)
    {
        forn(j,0,v[i]) cout << s[i];
    }

    // ll t = 0;
    // while(t < 40 && n >= pwrs[t]) t++;
    // t++;
    // if(pwrs[t - 1] > n) t--;
    // // dbg(pwrs[t]);
    // // dbg(pwrs[t - 1]);
    // // dbg(pwrs[t - 2]);

    // // dbg(t);
    // ll mx = 1, c = t;
    // while(c < n) 
    // {
    //     mx++; c *= t;
    // }



    // if(mx>0) forn(i,0,t)cout << "c"; else cout << "c";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "o"; else cout << "o";    
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "d"; else cout << "d";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "e"; else cout << "e";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "f"; else cout << "f";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "o"; else cout << "o";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "r"; else cout << "r";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "c"; else cout << "c";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "e"; else cout << "e";
    // mx--;
    // if(mx>0) forn(i,0,t)cout << "s"; else cout << "s";
    // mx--;
    

    return;
}   
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
        // ;
    }
    return 0;
}   