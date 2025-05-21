// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/gym/103373/problem/B
// status  : ac
     
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

const long long Nmax = 1000000; vll Dsum(Nmax+10,0);

void Pre(void)
{   
    forn(i,1,Nmax+1) for(ll j = i; j <= Nmax; j+= i) Dsum[j] += i; 
}   
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    // dbg(Dsum[n]);
    if(Dsum[n]-n==n) cout << "perfect" << nl;
    else if(Dsum[n]-n < n) cout << "deficient" << nl;
    else cout << "abundant" << nl;
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