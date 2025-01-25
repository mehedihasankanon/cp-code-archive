// Bismillahir Rahmanir Rahim
    
// link    : https://atcoder.jp/contests/abc267/tasks/abc267_c
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
    ll ans = -2e18;
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    forn(i,0,n)
    {
        cin >> v[i];
        // v[i] *= (i + 1);
    }

    ll s = 0, s1 = 0, ind = m;
    forn(i,0,m)
    {
        s += (i + 1) * v[i];
        s1 += v[i];
    }
    ans = max(s,ans);

    while(ind < n)
    {
        s -= s1;
        s += m * v[ind];
        s1 -= v[ind - m];
        s1 += v[ind];
        ans = max(s,ans);
        ind++;
    }

    cout << ans << NL;
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