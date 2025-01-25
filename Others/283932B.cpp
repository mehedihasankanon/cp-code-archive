// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
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

bool ok(vll& v,ll n,ll k,ld mid)
{
    ll cnt = 0;
    forn(i,0,n) cnt += floor(v[i]/mid);
    return cnt >= k;
}
    
    
void Solve(ll test)
{   
    ll n, k;
    cin >> n >> k;
    vll v(n);
    forn(i,0,n)
    {
        cin >> v[i];
    }

    ld l = 0, r = 1, mid;
    while(ok(v,n,k,r)) r *= 2;
    forn(i,0,100)
    {
        mid = (l+r)/2;
        if(ok(v,n,k,mid)) l = mid;
        else r = mid;
    }

    cout << setprecision(15) << fixed << l << nl;
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