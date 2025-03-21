// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2078/problem/C
// editorial
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
// #define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    n *= 2;
    vector<ll> v(n), sol(n + 1);

    forn(i,0,n) cin >> v[i];
    sort(v.begin(),v.end(),greater());

    ll t = 0;
    for(ll i = 0; i <= n; i += 2) sol[i] = v[t++];
    for(ll i = 1; i <= n; i+= 2) sol[i] = v[t++];

    sol[n - 1] = 0;
    dbgc(sol);
    
    forn(i,0, n - 1)
    {
        if((i & 1)) sol[n-1] -= sol[i];
        else sol[n-1] += sol[i];
    }

    sol[n - 1] += sol[n];

    forn(i,0,n+1) cout << sol[i] << " ";
    cout << nl;
    return;

    

}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   