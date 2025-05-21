// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1610/problem/C
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
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    forn(i,0,n) cin >> a[i] >> b[i];

            // cerr << "-----" << NL;


    ll lo = 0, hi = n+1;
    while(hi > lo + 1)
    {
        ll mid = (hi + lo) / 2;

        ll pos = mid;
        // dbg(mid);
        ll t = 0;
        while(t < n && mid)
        {
            if(a[t] >= pos - 1 && b[t] >= mid - pos) pos--;
            // dbg(a[t]); dbg(b[t]);
            t++;
            // dbg(t); dbg(pos);
            if(pos == 0) break;
            if(t > n - 1) break;
        }

        if(pos <= 0) lo = mid;
        else hi = mid;
    }

    cout << lo << NL;
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