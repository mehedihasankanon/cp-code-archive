// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/EOlymp-11161
// SHAAAAAAAAAAAAA!!!!!!!!
    
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

ll t, a, b; 

void process(ll n, vector<vector<bool>> &poss, ll p)
{
    if(n > t) return;

    if(poss[p][n]) return;

    poss[p][n] = 1;
    if(p == 0) process(n/2,poss,1);
    process(n+a,poss,p);
    process(n + b, poss, p);
}
    
    
void Solve(ll test)
{
    cin >> t >> a >> b;
    vector<vector<bool>> poss(2, vector<bool>(t + 1, 0));

    process(0, poss, 0);

    forr(i,t,0)
    {
        if(poss[1][i] || poss[0][i])
        {
            cout << i << nl;
            return;
        }
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