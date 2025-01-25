// Bismillahir Rahmanir Rahim
     
// link    : https://www.codechef.com/CENS2020/problems/CENS20A
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>

#pragma GCC target("avx2")
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
// ll M = 1000000007;
// ll MOD = 998244353;
// ld EPS = 1e-12;
// ll INF = 0x7fffffffffffffffLL;
    
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
    ll n, m; cin >> n >> m;
    vector<vector<ll>> v(n,vector<ll>(m)), pref(n + 2, vector<ll>(m + 2,0));

    forn(i,0,n) 
    {
        string s; cin >> s;
        forn(j,0,m)
        {
            v[i][j] = s[j] - '0';
        }
    }

    ll q; cin >> q;
    forn(i,0,q)
    {
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        pref[x1][y1]++; 
        pref[x2 + 1][y1]--;
        pref[x1][y2 + 1]--;
        // pref[x2 + 1][y2 + 1]--;
        pref[x2 + 1][y2 + 1]++;
    }

    forn(i,1,n+1)
    {
        forn(j,1,m+1)
        {
            // pref[i][j] += pref[i - 1][j] + pref[i][j - 1];
            pref[i][j] += pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
            v[i - 1][j - 1] += pref[i][j];
            v[i - 1][j - 1] %= 2;
        }
    }

    forn(i,0,n) 
    {
        forn(j,0,m)
        {
            cout << v[i][j];
        }
        cout << NL;
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