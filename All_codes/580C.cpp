// Bismillahir rahmanir rahim

// https://codeforces.com/contest/580/problem/C
// AC

#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")

using namespace std;

// using ll = long long;
using ll = int;
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

void dfs(ll node, vector<bool> &vis, vector<bool> &rest, vector<bool> &cat, vector<vector<ll>> &adj, vector<ll>& cnt, ll curr, ll mx)
{
    vis[node] = 1;
    dbg(node); dbgc(adj[node]);
    if(node != 1 && adj[node].size() == 1) 
    {
        rest[node] = true;
        dbg(mx); dbg(curr);
        cnt[node] = max(mx,curr + cat[node]);
    }
    else
    {
        if(!cat[node]) curr = 0;
        else {dbg("-");curr++, mx = max(curr,mx); dbg(mx); dbg(curr);}
        for(auto x : adj[node])
        {
            if(!vis[x]) dfs(x,vis,rest,cat,adj,cnt,curr,mx);
        }
    }
}

void Solve(ll test)
{
    ll n, m;
    cin >> n >> m;
    vector<bool> cat(n + 1, 0);
    forn(i, 1, n + 1)
    {
        ll x;
        cin >> x;
        cat[i] = x;
    }

    vector<bool> rest(n + 1, false);
    vector<vector<ll>> adj(n + 1);
    vector<ll> cnt(n + 1, 0);
    vector<bool> vis(n + 1, false);
    forn(i, 0, n - 1)
    {
        ll par, chi;
        cin >> par >> chi;
        adj[par].push_back(chi);
        adj[chi].push_back(par);
    }

    // ll mx = cat[1];
    dfs(1, vis, rest, cat, adj, cnt, 0, 0);

    ll ans = 0;
    forn(i,1,n+1) ans += (rest[i] && cnt[i] <= m);
    dbgc(cnt);
    cout << ans << nl;
    return;
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