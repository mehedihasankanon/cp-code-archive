// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
// status  : 
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
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
    ll n1,n2; cin >> n1 >> n2;
    vll v1(n1),v2(n2);
    forn(i,0,n1) cin >> v1[i];
    forn(i,0,n2) cin >> v2[i];

    ll p1 = 0, p2 = 0;
    while(p1 < n1 or p2 < n2)
    {
        if(p1 == n1) cout << v2[p2++] << " ";
        else if(p2 == n2) cout << v1[p1++] << " ";
        else if(v1[p1] < v2[p2]) cout << v1[p1++] << " ";
        else cout << v2[p2++] << " ";
    }
    cout << nl;
    return;
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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