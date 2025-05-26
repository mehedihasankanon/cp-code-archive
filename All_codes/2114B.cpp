// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2114/problem/B
// AC
    
#pragma GCC optimize("O3,unroll-loops")
    
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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    if(n % 2 == 1 && k == 0)
    {
        cout << "NO" << nl;
        return;
    }

    ll c1 = 0, c0 = 0;
    for(auto c : s)
    {
        if(c - '0') c1++;
        else c0++;
    }

    if(n % 2 == 1)
    {
        n--;
        if(c1 & 1) c1--;
        else c0--;
    }

    ll t = n/2 - k;

    while(t)
    {
        c1--;
        c0--;
        t--;
    }

    if(c1 >= 0 && c1 % 2 == 0 && c0 >= 0 && c0 % 2 == 0)
    {
        cout << "YES" << nl;
        return;
    }
    cout << "NO" << nl;



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