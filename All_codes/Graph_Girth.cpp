// Bismillahir rahmanir rahim
    
// https://cses.fi/problemset/task/1707
// AC
    
#pragma GCC optimize("O3,unroll-loops")
    
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
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adj(n + 1);
    forn(i,0,m)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // vector<ll> ans;
    ll ans = 2e6;
    vector<bool> vis(n + 1, 0);
    forn(i,1,n+1)
    {
        ll src = i;
        vector<ll> len(n + 1, 0), par(n + 1, -1);
        queue<ll> q;
        q.push(src);
        vis[src] = 1;
        while(!q.empty())
        {
            ll t = q.front();
            q.pop();
            bool found = 0;

            // dbgc(len);

            for(auto node : adj[t])
            {
                if(!vis[node])
                {
                    q.push(node);
                    len[node] = len[t] + 1;
                    vis[node] = 1;
                    par[node] = t;
                }
                else if(par[t] != node)
                {
                    // dbg(len[node]);
                    ans = min(len[node] + len[t] + 1,ans);
                    // found = 1;
                    // break;
                }
            }
            // if(found) break;

        }
        // dbgc(vis);
        vis.clear();
        vis.resize(n + 1, 0);
    }

    if(ans == 2e6)
    {
        cout << -1 << nl;
        return;
    }
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