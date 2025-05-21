// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/802/problem/J
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
using namespace std;
    
// using ll = long long;
using ll = int;
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
    
   
ll dfs(ll node, vector<bool>& vis, vector<vector<pair<ll,ll>>>& adj)
{
    vis[node] = true;

    ll cost = 0;
    for(auto [x,c] : adj[node])
    {
        if(!vis[x])
        {
            cost = max(cost, c + dfs(x,vis,adj));
            dbg(cost);
        }
    }

    return cost;
}


void Solve(ll test)
{
    ll n; cin >> n;
    vector<vector<pair<ll,ll>>> adj(n + 1);
    vector<bool> vis(n + 1, 0);

    forn(i,0,n-1)
    {
        ll a, b, c; cin >> a >> b >> c;
        a++, b++;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    cout << dfs(1,vis,adj) << nl;
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