// Bismillahir rahmanir rahim
    
// https://cses.fi/problemset/task/1667
// ac
    
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
    ll n,m; cin >> n >> m;
    vector<vector<ll>> adj(n+1);
    forn(i,0,m)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
    }

    ll root = 1;
    queue<ll> q;
    q.push(root);

    vector<bool> vis(n + 1, 0);
    vector<ll> par(n + 1, 0);
    vis[root] = 1;
    while(!q.empty())
    {
        ll cur = q.front(); q.pop();

        for(auto node : adj[cur])
        {
            if(!vis[node])
            {
                par[node] = cur;
                q.push(node);
                vis[node] = 1;
            }
        }
    }

    if(!vis[n])
    {
        cout << "IMPOSSIBLE" << nl;
        return;
    }

    vector<ll> ans;
    ans.push_back(n);
    while(ans.back() != 1)
    {
        ans.push_back(par[ans.back()]);
    }

    cout << ans.size() << nl;
    for(auto it = ans.rbegin(); it != ans.rend(); it++) cout << *it << " ";
    return ;
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