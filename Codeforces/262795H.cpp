// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/H
// status  : ac

// #pragma GCC optimize("O1,O2,O3")
// #pragma GCC optimize("Ofast,unroll-loops")
   
#include <bits/stdc++.h>
#include <string>
#include <vector>


// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
 
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    string s; cin >> s;
    vll pref(s.size()+1);
    pref[0]=0;
    ll cnt = 0;
    forn(i,0,(ll)s.size())
    {
        if(s[i]=='a') cnt++;
        pref[i+1] = cnt;
    }
    ll k; cin >> k;
    forn(i,0,k)
    {
        ll l, r; cin >> l >> r;
        cout << pref[r]-pref[l-1] << nl;
    }
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   