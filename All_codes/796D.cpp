// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/796/problem/D
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
    ll n, k, d; cin >> n >> k >> d;
    map<pair<ll,ll>,ll> mp;
    vector<bool> p(n+1);
    forn(i,0,k)
    {
        ll x; cin >> x;
        p[x] = 1;
    }

    vector<vector<ll>> adj(n + 1);
    forn(i,1,n)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
        mp[{a,b}] = i;
    }

    queue<ll> q;
    vector<bool> vis(n + 1, 0);
    vector<ll> dis(n+1,0);
    forn(i,1,n+1)
    {
        if(p[i])
        {
            q.push(i);
            vis[i] = 1;
        }
    }

    while(!q.empty())
    {
        ll t = q.front();
        q.pop();

        if(dis[t] < d) for(auto x : adj[t])
        {
            if(!vis[x])
            {
                dis[x] = dis[t] + 1;
                vis[x] = 1;
                mp[{t,x}] = -1;
                mp[{x,t}] = -1;
                q.push(x);
            }
        }
    }

    vector<ll> ans;

    for(auto [u,v] : mp)
    {
        if( v!= -1) ans.push_back(v);
    }

    cout << ans.size() << nl;
    for(auto x : ans) cout << x << " ";
    

    // set<pair<ll,ll>> ans;
    // forn(i,1,n+1)
    // {
    //     for(auto j : adj[i])
    //     {
    //         if(!mp[{i,j}] && !mp[{j,i}]) ans.insert({i,j});
    //     }
    // }

    // cout << ans.size() << nl;
    // for(auto [x,y] : ans) cout << x << " " << y << nl;
    // cout << nl;
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