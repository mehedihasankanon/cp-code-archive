// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2072/problem/F
// WA **editorial**
    
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
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

vector<ll> pr(1e6 + 50,0);
void Pre(void)
{
    forn(i,2,1e6+50)
    {
        pr[i] = pr[i - 1];
        ll t = i;
        // the maximum power of 2 t is divisible by
        while(!(t & 1))
        {
            t >>= 1;
            pr[i]++;
        }
    }
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, k; cin >> n >> k;
    // if(n == 1)
    // {
    //     cout << k << nl;
    //     return;
    // }
    // else if(n & 1)
    // {
    //     cout << k << " ";
    //     forn(i,0,n - 2) cout << 0 << ' ';
    //     cout << k << nl;
    //     return;
    // }
    
    // forn(i,0,n) cout << k << " ";
    // cout << nl;

    forn(i,0,n-1)
    {
        if(pr[n-1] == pr[i] + pr[n - 1 - i]) cout << k << " ";
        else cout << 0 << " ";
    }
    cout << k << nl;
    return;


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