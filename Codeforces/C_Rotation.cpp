// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc258/tasks/abc258_c
// status  : TLE TLE AC

// naive implementation wont get you anywhere 
// learn to deeply think :)
     
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
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    // reverse(s.begin(),s.end());

    // ll ind = 0;
    // TLE
    // forn(i,0,q)
    // {
    //     ll k, p; cin >> k >> p;
    //     if(k == 1)
    //     {
    //         forn(j,ind,ind+p) s.push_back(s[j]);
    //         // dbg(s);
    //         ind += p;
    //     }
    //     else
    //     {
    //         cout << s[ind + n - p] << NL;
    //     }
    // }

    // another tle
    // while(q)
    // {
    //     ll k, p, p1 = 0, cnt = 0;
    //     cin >> k >> p;
    //     while(k == 1)
    //     {
    //         p1 += p;
    //         cnt++;
    //         cin >> k >> p;
    //     }
    //     q -= cnt;
    //     p1 %= n;
    //     if(p1)
    //     {
    //         string s1 = s;
    //         string s2 = s1.substr(n - 1 - p1,p1);
    //         reverse(s2.begin(),s2.end());
    //         s = s2 + s1.substr(0,n - p1); 
    //         // dbg(s);
    //     }
    //     // dbg(p);
    //     cout << s[p - 1] << NL;
    //     q--;
    // }

    ll p = 0;
    forn(i,0,q)
    {
        ll k,x; cin >> k >> x;
        if(k == 2) cout << s[((x - 1 - p%n) + n)%n] << NL;
        else p += x;
    }
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