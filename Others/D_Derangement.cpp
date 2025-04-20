// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc072/tasks/arc082_b
// WA AC

// implemented wrong the first time
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
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
    ll n; cin >> n;
    vector<bool> v(n+1);
    forn(i,1,n+1)
    {
        ll x; cin >> x; v[i] = (i != x);
    }

    ll idx = 1, ans = 0;

    while(idx < n)
    {
        if(!v[idx]) v[idx] = 1, v[idx+ 1] = 1, ans++;
        dbgc(v);
        idx++;
    }
    if(!v[n]) ans++;
    // wrong --> surely misses some testcases
    // dbgc(v);
    // while(idx <= n)
    // {
    //     if(!v[idx])
    //     {
    //         ll t = 0;
    //         while(idx <= n && !v[idx]) idx++, t++;
    //         dbg(t);
    //         if(t == 1) ans++;
    //         else ans += t - 1;
    //     }
    //     else idx++;
    // }
    cout << ans << nl;
    return;
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