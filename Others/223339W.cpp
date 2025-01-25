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

void Pre(void)
{   
    
}   


/*
bool p2(ll n)
{
    while(!(n&1)) n>>=1;
    if(n!=1) return false;
    else return true;
}
    
bool ok (ll n)
{
    if(n%10 != 0)
    {
        if(p2(n)) return true;
        else return false;
    }
    else return ok(n/10);
}
    
void Solve(ll test)
{   
    ll n; cin >> n;
    if(n%10 != 0 and n > 1) 
    {
        cout << "NO\n";
        return;
    }
    if(ok(n)) cout << "YES\n";
    else cout << "NO\n";
}   */


bool poss(ll a,ll n)
{
    if(a==n) return true;
    else if(a > n) return false;
    else return poss(a*10,n) or poss(a*20,n);
}

void Solve (ll test)
{
    ll n; cin >> n;
    if(poss(1,n)) cout << "YES\n";
    else cout << "NO\n";
    return;
}



int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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