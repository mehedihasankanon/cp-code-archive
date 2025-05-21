// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1722/problem/E
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

void Pre(void)
{
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, q; cin >> n >> q;
    vector<vector<ll>> pref(1002,vector<ll>(1002,0));

    forn(i,0,n)
    {
        ll x, y; cin >> x >> y;
        pref[x][y] += x * y;
    }

    forn(i,1,1002)
    {
        forn(j,1,1002)
        {
            pref[i][j] += pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1];
            // dbg(pref[i][j]);
            // cerr << pref[i][j] << " ";
        }
        // cerr << NL;
    }


    forn(i,0,q)
    {
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1--, y1--, x2--, y2--;
        cout << pref[x2 + 1][y2 + 1] - pref[x2 + 1][y1] - pref[x1][y2 + 1] + pref[x1][y1] << NL;
    }
    return;
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    // freopen("error.out", "w", stderr);
    
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