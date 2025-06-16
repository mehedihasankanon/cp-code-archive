// Bismillahir rahmanir rahim

// https://cses.fi/problemset/task/1679
// AC

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
#define forn(i, s, e) for (ll i = s; i < e; i++)
#define forr(i, s, e) for (ll i = s; i >= e; i--)

// #define DEBUG

#ifdef DEBUG
#define dbg(n) cerr << __LINE__ << " " << #n << " " << n << endl;
#define dbgc(a)                                         \
    cerr << __LINE__ << " " << #a << " " << '[' << " "; \
    for (auto el : a)                                   \
    {                                                   \
        cerr << el << " ";                              \
    }                                                   \
    cerr << ']' << endl;
#define dbgcc(a)                                                                 \
    cerr << __LINE__ << " " << #a << " " << '[' << " ";                          \
    for (auto el : a)                                                            \
    {                                                                            \
        cerr << '{' << " " << el.first << ',' << el.second << " " << '}' << " "; \
    }                                                                            \
    cerr << ']' << endl;
#else
#define dbg(n)   // single variable, string
#define dbgc(a)  // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif

ll testcase = 1;

void Pre(void)
{

    return;
}

ll n, m;
vector<vector<ll>> adj;
vector<ll> vis;
vector<ll> ans;

void dfs(ll node)
{
    vis[node] = 1;

    for(auto chi : adj[node])
    {
        if(!vis[chi])
        {
            dfs(chi);
        }
    }
    ans.push_back(node);
}



void Solve(ll test)
{
    cin >> n >> m;
    adj.resize(n+1);
    vis.resize(n + 1, 0);
    forn(i,0,m)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
    }


    forn(i,1,n+1)
    {
        if(!vis[i]) dfs(i);
    }


    vector<ll> pos(n + 1);
    reverse(ans.begin(), ans.end());

    forn(i,0,ans.size())
    {
        pos[ans[i]] = i;
    }

    for(auto t : ans)
    {
        for(auto u : adj[t])
        {
            if(pos[u] <= pos[t])
            {
                cout << "IMPOSSIBLE" << nl;
                return;
            }
        }
    }

    for(auto t : ans)
    {
        cout << t << " ";
    }

    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Pre();

    // cin >> testcase;

    ll test;
    for (test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}