// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/problemset/problem/192/A
// status  : 
     
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

// vector<ll> tri(1e7,0);

void Pre(void)
{
    // forn(i,0,1e5) tri[i] = (i*i + i)/2;
    
    
    
    return;
}   

bool chk(ll t)
{
    ll t1 = (ll)((- 1.0 + sqrtl(1.0 + 4.0*t))/2.0);
    if(t1 * t1 + t1 == t) return true;
    else return false;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;

    for(ll i = 1; i*i + i <= n; i++)
    {
        ll t2 = 2*n - i*i - i;
        if(t2 == 0 || chk(t2)) 
        {
            cout << "YES" << NL;
            return;
        }
    }
    cout << "NO" << NL;
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