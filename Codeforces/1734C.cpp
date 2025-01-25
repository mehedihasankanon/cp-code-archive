// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1734/problem/C
// status  : RE AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
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
// const long long Nmax = 1000000; vll mindiv(Nmax+10,1); vector<bool> vis(Nmax+10,false);
void Pre(void)
{   
    // mindiv[1]=1;
    // forn(i,2,Nmax+1) for(ll j = i; j <= Nmax; j+=i) if(!vis[j]) {mindiv[j] = i; vis[j] = true; }
}   
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    string s; cin >> s;
    ll ans = 0;
    // forn(i,0,n) if(s[i]=='0') {ans+=mindiv[i+1]; dbg(i); dbg(mindiv[i+1]);}     
    // cout << ans << nl;

    // unordered_map<ll,bool> vis;
    vector<bool> vis(n+1,false);
    forn(i,0,n)
    {
        if(s[i]=='0')
        {
            // getting RE on this line bcz wrote s[j]=='0' before j < n and 
            // since the compiler compares s[j] first, it gives RE
            for(ll j = i;  j < n and s[j] == '0'; j += i+1)
            {
                if(s[j]=='0' and !vis[j+1]) {ans+=i+1; vis[j+1]=true;}
            }
        }
    }
    cout << ans << nl;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   