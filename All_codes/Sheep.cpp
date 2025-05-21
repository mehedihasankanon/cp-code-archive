// Bismillahir rahmanir rahim

// https://vjudge.net/problem/SPOJ-KOZE
// AC

// #pragma GCC optimize("O1,O2,O3")
// #pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

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

ll culp = -1;

void dfs(ll x, ll y, vector<string> &grid, vector<vector<bool>> &vis, vector<vector<pair<ll, ll>>> &regions)
{
    if (x < 0 || y < 0 || x == grid.size() || y == grid[0].size() || vis[x][y])
        return;
    
    if(x == grid.size() - 1 && y == grid[0].size() - 1)
    {
        culp = regions.size();
    }

    vis[x][y] = 1;

    if (grid[x][y] != '#')
    {
        regions.back().push_back({x, y});
        dfs(x - 1, y, grid, vis, regions);
        dfs(x + 1, y, grid, vis, regions);
        dfs(x, y - 1, grid, vis, regions);
        dfs(x, y + 1, grid, vis, regions);
    }
}

void Solve(ll test)
{
    ll a, b;
    cin >> a >> b;
    vector<string> f(a);
    forn(i, 0, a) cin >> f[i];

    vector<vector<bool>> vis(a, vector<bool>(b, 0));

    vector<vector<pair<ll, ll>>> regions;

    ll sheep = 0, wolf = 0;
    forn(i, 0, a) forn(j, 0, b)
    {
        sheep += f[i][j] == 'k';
        wolf += f[i][j] == 'v';
        if (!vis[i][j])
        {
            if (f[i][j] == '#')
            {
                vis[i][j] = 1;
                continue;
            }
            regions.push_back({});
            dfs(i, j, f, vis, regions);
        }
    }

    forn(i,0,regions.size())
    {
        if(i == culp - 1) continue;
        vector<pair<ll,ll>> &a = regions[i];
        dbgcc(a);
        ll s1 = 0, w1 = 0;
        for (auto [p, q] : a)
        {
            s1 += f[p][q] == 'k';
            w1 += f[p][q] == 'v';
        }

        if(s1 > w1)
        {
            wolf -= w1;
        }
        else
        {
            sheep -= s1;
        }
    }

    cout << sheep << " " << wolf << nl;
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