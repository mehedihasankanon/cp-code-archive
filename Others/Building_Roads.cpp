// Bismillahir rahmanir rahim
    
// https://cses.fi/problemset/task/1666
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
    
void dfs(ll node, vector<vector<ll>>& adj, vector<bool>& vis)
{
    vis[node] = true;
    for(auto x : adj[node])
    {
        if(!vis[x])
        {
            dfs(x,adj,vis);
        }
    }
}
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n + 1);
    forn(i,0,m)
    {
        ll s,e; cin >> s >> e;
        adj[s].push_back(e);
        adj[e].push_back(s);
    }

    vector<bool> vis(n + 1, false);
    vector<pair<ll,ll>> v;
    dfs(1,adj,vis);
    // dbgc(vis);
    forn(i,1,n+1)
    {
        if(!vis[i]) 
        {
            dfs(i, adj, vis);
            v.push_back({1,i});
        }
    }

    cout << v.size() << nl;
    for(auto [p,q] : v) cout << p << " " << q << nl;
    
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