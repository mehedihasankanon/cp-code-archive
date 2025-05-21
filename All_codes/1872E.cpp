// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1872/problem/E
// status  : editorial
     
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
    vector<ll> a(n);
    vector<ll> pref(n + 2, 0);
    forn(i,0,n)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] ^ a[i];
    }
    ll x0 = 0, x1 = 0;
    string s; cin >> s;
    vector<ll> bin(n);
    forn(i,0,n)
    {
        bin[i] = s[i] - '0';
        // dbg(bin[i]);
        if(bin[i]) x1 ^= a[i];
        else x0 ^= a[i];
    }

    // bool proc = true;

    ll q; cin >> q;
    ll lm = 1, rm = n;
    forn(i,0,q)
    {
        ll tp; cin >> tp;
        if(tp == 1)
        {
            ll l, r; cin >> l >> r;
            x0 ^= pref[l - 1] ^ pref[r];    
            x1 ^= pref[l - 1] ^ pref[r];
        }
        else
        {
            ll x; cin >> x;
            if(x) cout << x1 << " ";
            else cout << x0 << " ";
        }
        // if(tp == 1)
        // {
        //     ll l, r; cin >> l >> r;
        //     lm = min(lm, l); rm = max(rm,r);
        //     if(proc) 
        //     {
        //         lm = l, rm = r;
        //         pref.clear();
        //         pref.resize(n + 2, 0);
        //     }
        //     pref[l]++;pref[r+1]--;proc = false;
        // }
        // else
        // {
        //     ll b; cin >> b;
        //     if(!proc)
        //     {
        //         proc = true;
        //         forn(i,lm,rm+1)
        //         {
        //             pref[i] += pref[i - 1];
        //             // dbg(pref[i]);
        //             if(pref[i] & 1)
        //             {
        //                 x0 ^= a[i - 1];
        //                 x1 ^= a[i - 1];
        //             }
        //         }
        //         // forn(i,1,n+1) cerr << pref[i] << " ";
        //         // cerr << NL;
        //     }
        //     if(b) cout << x1 << " ";
        //     else cout << x0 << " "; 
        // }
    }
    cout << NL;
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