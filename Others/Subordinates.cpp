// Bismillahir rahmanir rahim
    
// https://cses.fi/problemset/task/1674
// AC
    
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

void dfs(ll node, vector<vector<ll>>& adj, vector<bool>& vis, vector<ll>& sub)
{
    vis[node] = true;
    for(auto s : adj[node])
    {
        if(!vis[s]) dfs(s,adj,vis,sub); 
        sub[node] += sub[s] + 1;
    }
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> sub(n + 1, 0);
    sub[1] = n - 1;
    vector<vector<ll>> adj(n +1 );
    forn(i,2,n+1)
    {
        ll x; cin >> x;
        adj[x].push_back(i);
    }

    vector<bool> vis(n + 1, false);
    vis[1] = true;
    forn(i,2,n+1)
    {
        if(!vis[i]) dfs(i,adj,vis,sub);
    }

    forn(i,1,n+1) cout << sub[i] << " ";
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