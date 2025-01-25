// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
// status  : 
     
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



void Solve(ll test)
{   
    ll n; cin >> n;

    // accepted with no recursion
    /*
    ll p2 = 0, p5 = 0;
    while(!(n&1)) p2++,n>>=1;
    while(n%5==0) p5++,n/=5;
    if(n!=1)
    {
        cout << "NO" << nl;
        return;
    }
    else
    {
        if(p2-p5>=0 and 2*p5-p2>=0)
        {
            cout << "YES" << nl;
            return;
        }
        else
        {
            cout << "NO" << nl;
            return;
        }
    }
    */

    
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   