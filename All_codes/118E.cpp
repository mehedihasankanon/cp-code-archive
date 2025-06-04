// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/118/problem/E
// AC
    
#pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("avx2")
    
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
    ll timer = 0;
    // map<pair<ll,ll>,ll> mp;
    set<pair<ll,ll>> mp;
    
void dfs(ll node,vector<vector<ll>> &adj,vector<ll> &dp, vector<ll> &tin, ll par)
{
    tin[node] = ++timer;
    ll down = 0, up = 0;
    for(auto t : adj[node])
    {
        if(t == par) continue;

        if(!tin[t])
        {
            dfs(t,adj,dp,tin,node);
            dp[node] += dp[t];
            // mp[{node,t}] = 1;
            mp.insert({node,t});
        }
        else if(tin[t] < tin[node]) {up++; }
        else {down++;  }
    }
    // auto it = mp.begin(); while(it != mp.end()) { cerr << it->first << " " << it->second << nl; advance(it,1); } cerr << nl;
    dp[node] += up - down;
}
    
void Solve(ll test)
{
    ll n,m; cin >> n >> m;
    vector<pair<ll,ll>> v(m);
    vector<vector<ll>> adj(n + 1);
    for(auto &[a,b] : v)
    {
        cin >> a >> b;
        if(a < b) swap(a,b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<ll> dp(n + 1, 0);
    vector<ll> tin(n + 1, 0);

    dfs(1,adj,dp,tin,-1);

    // dbgc(dp);
    if(count(dp.begin() + 2,dp.end(),0) != 0 || adj[1].size() == 1)
    {
        cout << 0 << nl;
        return;
    }

    // for(auto [u,v] : mp) cerr << u.first << " " << u.second << nl;
    // auto it = mp.begin(); while(it != mp.end()) { cerr << it->first << " " << it->second << nl; advance(it,1); } cerr << nl;

    for(auto p : v)
    {
        if(mp.count(p))
        {
            cout << p.first << " " << p.second << nl;
        }
        else if(mp.count({p.second,p.first}))
        {
            cout << p.second << " " << p.first << nl;
        }
        else 
        {
            if(tin[p.second] > tin[p.first]) cout << p.second << " " << p.first << nl;
            else cout << p.first << " " << p.second << nl;
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