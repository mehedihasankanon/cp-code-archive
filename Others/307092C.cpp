// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
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
    ll n1, n2; cin >> n1 >> n2;
    vll v1(n1);
    // unordered_map<ll,ll> eqls;
    forn(i,0,n1) cin >> v1[i];
    ll ans = 0, ind = 0, lastcomp, lasteql = 0;
    cin >> lastcomp;
    // dbg(lastcomp);
    while(ind < n1 and v1[ind] < lastcomp) ind++;
    while(ind < n1 and v1[ind]==lastcomp) {ind++;lasteql++;}
    ans+=lasteql;
    // dbg(lasteql);
    forn(i,1,n2)
    {
        ll x; cin >> x;
        if(x==lastcomp) ans+=lasteql;
        else
        {
            ll cnt = 0;
            while(ind < n1 and v1[ind] < x) {ind++; }
            while(ind < n1 and v1[ind]==x) {ind++;cnt++; }
            lastcomp = x;
            lasteql = cnt;
            ans+=lasteql;
            // dbg(lastcomp);
            // dbg(lasteql);
        }
    }

    cout << ans << nl;
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