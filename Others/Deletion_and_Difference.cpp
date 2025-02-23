// Bismillahir rahmanir rahim
    
// https://www.codechef.com/START174C/problems/DELDIF
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define debug(n) cout<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define debugc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<el<<" ";}cout<<']'<<endl;
#define debugcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cout<<']'<<endl;
#else
#define debug(n) // single variable, string
#define debugc(a) // vector, deque, array
#define debugcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    map<ll,ll> mp;
    ll l0 = 0, l1 = 0;
    forn(i,0,n)
    {
        ll x; cin >> x; if(x) mp[x]++, l1++; else l0++;
    }

    for(auto [u,v] : mp)
    {
        l0 += v/2;
        l1 -= v - v % 2;
    }
    // debug(l1); debug(l0);
    while(l0 >= 2)
    {
        ll rem = l0 % 2;
        l0 -= rem;
        l0 /= 2;
        l0 += rem;
        // dbg(l0);
    }
    cout << l0 + l1 << nl;
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