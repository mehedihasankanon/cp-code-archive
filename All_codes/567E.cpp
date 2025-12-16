// Bismillahir rahmanir rahim

// https://codeforces.com/contest/567/problem/E
// ok

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template<typename T>
// using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Extra functionality :
// os.find_by_order(index) => iterator to the element at that index (0-based)
// os.order_of_key(value) => number of elements strictly less than value

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

void Solve(ll test)
{
    ll n, m, s, t;
    cin >> n >> m >> s >> t;

    struct Edge
    {
        ll from, to, cost;
    };
    vector<Edge> edges;
    vector<vector<pair<ll, ll>>> adj(n + 1), revAdj(n + 1);

    forn(i, 0, m)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        revAdj[v].push_back({u, w});
        edges.push_back({u, v, w});
    }

    auto dijkstra = [&](ll start, const vector<vector<pair<ll, ll>>> &graph, vector<ll> &dist, vector<pair<ll, ll>> &counts)
    {
        dist.assign(n + 1, 1e18);
        counts.assign(n + 1, {0, 0});
        dist[start] = 0;
        counts[start] = {1, 1};

        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
        pq.push({0, start});

        ll MOD1 = 1e9 + 7;
        ll MOD2 = 1e9 + 9;

        while (!pq.empty())
        {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u])
                continue;

            for (auto [v, w] : graph[u])
            {
                if (dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    counts[v] = counts[u];
                    pq.push({dist[v], v});
                }
                else if (dist[u] + w == dist[v])
                {
                    counts[v].first = (counts[v].first + counts[u].first) % MOD1;
                    counts[v].second = (counts[v].second + counts[u].second) % MOD2;
                }
            }
        }
    };

    vector<ll> dS, dT;
    vector<pair<ll, ll>> cntS, cntT;

    dijkstra(s, adj, dS, cntS);
    dijkstra(t, revAdj, dT, cntT);

    ll shortest_dist = dS[t];
    pair<ll, ll> total_paths = cntS[t];
    ll MOD1 = 1e9 + 7;
    ll MOD2 = 1e9 + 9;

    for (const auto &e : edges)
    {
        ll u = e.from;
        ll v = e.to;
        ll w = e.cost;

        if (dS[u] + w + dT[v] == shortest_dist)
        {
            ll paths_through = (cntS[u].first * cntT[v].first) % MOD1;
            ll paths_through2 = (cntS[u].second * cntT[v].second) % MOD2;

            if (paths_through == total_paths.first && paths_through2 == total_paths.second)
            {
                cout << "YES" << nl;
            }
            else
            {
                if (w > 1)
                {
                    cout << "CAN 1" << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
        }
        else
        {
            ll needed = shortest_dist - 1 - dS[u] - dT[v];
            if (needed > 0)
            {
                cout << "CAN " << (w - needed) << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
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