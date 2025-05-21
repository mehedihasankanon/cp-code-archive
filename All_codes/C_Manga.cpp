// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc271/tasks/abc271_c
// status  : WA AC

// first approach was wrong because of some wrong interations probably
// the second simpler approach works like magic
     
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

    // map<ll,ll> mp;
    // forn(i,0,n)
    // {
    //     ll x; cin >> x;
    // }

    // multiset<ll> v(n);
    vector<ll> v(n); map <ll,ll> mp;
    forn(i,0,n) cin >> v[i], mp[v[i]]++;
    sort(v.begin(), v.end());

    auto pt = v.begin(); auto chk = v.end() - 1;
    ll ans = 1;
    // while(pt < chk)
    // {
    //     // if(chk == pt + 1) break;
    //     while(*pt == ans) 
    //     {
    //         pt++; ans++;
    //     }
    //     if(chk == pt + 1) break;
    //     ans++;
    //     chk-=2;
    //     // if(*(pt + 1) == ans) pt++;
    // }
    // ans--;
    // // ans += (v.end() - pt)/2;

    // while(pt < chk)
    // {
    //     while(*pt == ans)
    //     {
    //         pt++; ans++;
    //         cerr << 1 << NL; dbg(*pt); dbg(ans);
    //     }
    //     while(ans != *pt)
    //     {
    //         if(chk > pt + 1)
    //         {
    //             chk -= 2;
    //             ans++;
    //             cerr << 2 << NL; dbg(*pt); dbg(ans); dbg(chk - v.begin());
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     pt++;
    //     ans++;
    // }

    // ll ans = 1;
    while(n > 0)
    {
        if(mp[ans])n--;
        else
        {
            if(n >= 2) n -= 2;
            else break;
        }
        ans++;
    }

    cout << ans-1 << NL;
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