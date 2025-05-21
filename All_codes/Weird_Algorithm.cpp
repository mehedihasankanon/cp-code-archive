// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1068
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

void Pre(void)
{   
    
}   
    
void func(ll n);
void f1(ll n);
void f0(ll n);

    
void Solve(ll test)
{   
    ll n; cin >> n;
    cout << n << " ";
    if(n != 1) func(n);
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

void func(ll n)
{
    if(n&1) f1(n);
    else f0(n);
}

void f1(ll n)
{
    if(n==1)
    {
        cout << n << nl;
        return;
    }
    n*=3; n++;
    cout << n << " ";
    f0(n);
}

void f0(ll n)
{
    n>>=1;
    cout << n << " ";
    if(n==1) return;
    else if(n&1) f1(n);
    else f0(n);
}