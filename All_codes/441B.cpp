// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/441/problem/B
// status  : 
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
}   
    
    
void Solve(ll test)
{
    map<ll,ll> mp;
    ll n, k, mx = 0; cin >> n >> k;
    forn(i,0,n)
    {
        ll day; cin >> day;
        mx = max(day,mx);
        ll fruit; cin >> fruit;

        mp[day] += fruit;
        
        
    }


    ll ans = 0;
    
    ll left = 0;
    forn(i,1,3001)
    {
        ll cap = k;
        if(cap > left) 
        {
            ans += left;
            cap -= left;
        }
        else
        {
            ans += cap;
            cap = 0;
        }
        left = 0;

        if(cap > mp[i])
        {
            ans += mp[i];
            left = 0;
        }
        else
        {
            ans += cap;
            left = mp[i] - cap;
        }

    }

    

    cout << ans << NL;
    return;


}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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