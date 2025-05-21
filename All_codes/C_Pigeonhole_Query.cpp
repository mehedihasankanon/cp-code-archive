// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc391/tasks/abc391_c
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
    ll n, k; cin >> n >> k;
    vector<ll> v(n + 1, 1), pig(n + 1);
    forn(i,0,n + 1) pig[i] = i;
    v[0] = 0;

    ll cnt = 0;
    forn(i,0,k)
    {
        ll tp; cin >> tp;
        if(tp == 1)
        {
            ll p, to; cin >> p >> to;
            v[pig[p]]--;
            if(v[pig[p]] == 1) cnt--;
            // dbg(cnt);
            pig[p] = to;
            v[to]++;
            if(v[to] == 2) cnt++;
            // dbg(cnt);

            // forn(i,0,n+1) cerr << pig[i] << " ";
            // cerr << NL;
            // forn(i,0,n+1) cerr << v[i] << " ";
            // cerr << NL << "------" << NL;
        }
        else
        {
            cout << cnt << NL;
            // return;
        }
    }
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