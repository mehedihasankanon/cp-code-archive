// Bismillahir rahmanir rahim
    
// 
// 
    
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
    
#define DEBUG
    
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
    ll n, k; cin >> n >> k;

    if(n == 1 || n == k)
    {
        cout << -1 << nl;
        return;
    }


    if(n % k != 0)
    {
        cout << -1 << nl;
        return;
    }

    forn(i,k+1,n+1) cout << i << " ";
    forn(i,1,k) cout << i << " ";
    cout << k << nl;
    return;
    
    // vector<ll> v(n*2);
    // forn(i,0,n) v[i] = i+1, v[n+i] = i+1;
    // ll idx = k;
    // forn(i,1,n+1)
    // {
    //     if(v[idx + i - 1] % k != i % k )
    //     {
    //         cout << -1 << nl;
    //         return;
    //     }
    // }
    // forn(i,idx,idx+n)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << nl;
    // return;
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