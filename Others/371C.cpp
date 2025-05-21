// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/problemset/problem/371/C
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

void Pre(void)
{
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    string s; cin >> s;
    ll b1 = 0, s1 = 0, c1 = 0; 
    for(auto c : s)
    {
        if(c == 'B') b1++;
        else if(c == 'C') c1++;
        else s1++;
    }

    ll nb, ns, nc; cin >> nb >> ns >> nc;
    ll pb, ps, pc; cin >> pb >> ps >> pc;
    ll ru; cin >> ru;

    // dbg(ru);

    ll lo = 0, hi = ru * 100 + nb + ns + nc;
    while(hi > lo + 1)
    {
        ll mid = lo + (hi - lo) / 2;

        if(max(mid * b1 - nb,0LL) * pb + max(mid * s1 - ns,0LL) * ps + max(mid * c1 - nc,0LL) * pc <= ru) lo = mid;
        else hi = mid;

        // cerr << "--------------------" << NL;
        // cerr << max(mid * b1 - nb,0LL) * pb + max(mid * s1 - ns,0LL) * ps + max(mid * c1 - nc,0LL) * pc << NL;

        // dbg(lo); dbg(hi);
    }

    // dbg(lo);

    cout << lo << NL;
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