// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2074/problem/C
// ac
    
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

bool chk(ll n, ll last)
{
    ll xr = last xor n;
    return n + last > xr && last + xr > n && xr + n > last;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;

    ll pr = 0, t = n;
    while(t > 1)
    {
        pr++;
        t >>= 1;
    }

    // forn(i,(n>>1),(n >> 1) + 5*pr + 2)
    // {
    //         ll x = n ^ i;
    //         // dbg(test); dbg(n); dbg(x); dbg(i);
    //         if(x + i > n && x + n > i && n + i > x) {cout << i << nl; return;}

    // }

    ll last = (1 << pr);
    if(n == last || ((n + 1) >> 1) == last)
    {
        cout << -1 << nl;
        return;
    }
    

    while(!chk(n,last)) last--;

    cout << last << nl;

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