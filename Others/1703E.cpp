// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/problemset/problem/1703/E
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
    vector<string> v(n,string(n,'0'));

    forn(i,0,n) cin >> v[i];

    ll ans = 0;
    forn(a,0,n/2)
    {
        forn(b,0,n/2)
        {
            ll cnt1 = 0;
            cnt1 += v[a][b] + v[b][n - 1 - a] + v[n - 1 - a][n-1-b] + v[n - 1 - b][a] - 4 * '0';

            ans += min(cnt1,4 -cnt1);
            // dbg(a); dbg(b);
            // dbg(cnt1);
        }
    }

    if(n & 1)
    {
        // ll cnt1 = 0;
        ll b = n/2;
        forn(a,0,n/2)
        {
            ll cnt1 = 0;
            cnt1 += v[a][b] + v[b][n - 1 - a] + v[n - 1 - a][n-1-b] + v[n - 1 - b][a] - 4 * '0';

            ans += min(cnt1,4 -cnt1);
        }
    }

    // cerr << "--------" << NL;
    cout << ans << NL;
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