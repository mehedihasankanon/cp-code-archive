// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1652
// status  : WA AC
     
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
    vector<vector<ll>> pref(n + 1, vector<ll>(n + 1, 0));
    vector<string> mp(n);
    forn(i,0,n)
    {
        cin >> mp[i];
        forn(j,0,n)
        {
            if(mp[i][j] == '*') pref[i+1][j+1] = 1;
            else pref[i+1][j+1] = 0;
            pref[i+1][j+1] += pref[i+1][j] + pref[i][j+1] - pref[i][j];
        }
    }
    // forn(i,0,n+1) {forn(j,0,n+1) {cerr << pref[i][j] << " ";} cerr << NL;}

    forn(i,0,k)
    {
        ll r1,c1,r2,c2; cin >> r1 >> c1 >> r2 >> c2;
        // pref[r1-1][c1-1] wasnt considered :)) had to read editorial
        cout << pref[r2][c2] - pref[r1-1][c2] - pref[r2][c1-1] + pref[r1-1][c1-1] << NL; 
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