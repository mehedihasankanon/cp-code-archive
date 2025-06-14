// Bismillahir rahmanir rahim
    
// https://www.codechef.com/problems/COZIE?tab=statement
// AC
    
#pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("avx2")
    
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
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
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
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    forn(i,0,n)
    {
        ll x; cin >> x;
        if(x == 3 || x == 4 || x == 6) v[i] = 1;
        else v[i] = 0;
    }
    vector<ll> pref(n + 1, 0);
    forn(i,1,n+1) pref[i] = pref[i - 1] + v[i-1];
    
    dbgc(v);
    dbgc(pref);

    forn(i,0,q)
    {
        ll l, r; cin >> l >> r;
        cout << pref[r] - pref[l - 1] << nl;
    }
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   