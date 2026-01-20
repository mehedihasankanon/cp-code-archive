// Bismillahir rahmanir rahim

// https://vjudge.net/problem/UVA-10724
// AC

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

void Solve(ll n, ll m)
{
    vector<pair<ll, ll>> ve(n + 1);
    forn(i, 1, n + 1) cin >> ve[i].first >> ve[i].second;

    vector<vector<ld>> adj(n + 1, vector<ld>(n + 1, mod));
    forn(i, 0, n + 1) adj[i][i] = 0;

    vector<vector<bool>> road(n + 1, vector<bool>(n + 1, 0));

    forn(i, 0, m)
    {
        ll u, v;
        cin >> u >> v;

        adj[u][v] = adj[v][u] = min(adj[u][v],
                                    sqrtl((ve[u].first - ve[v].first) * (ve[u].first - ve[v].first) + (ve[u].second - ve[v].second) * (ve[u].second - ve[v].second)));
        road[u][v] = road[u][v] = true;
    }

    vector<vector<ld>> preCost = adj;

    forn(k, 1, n + 1)
    {
        forn(i, 1, n + 1)
        {
            forn(j, 1, n + 1)
            {
                preCost[i][j] = min(preCost[i][j], preCost[i][k] + preCost[k][j]);
            }
        }
    }

    ld ans = 0;
    vector<pair<ll, ll>> pr = {{100, 100}};

    forn(i, 1, n + 1)
    {
        forn(j, 1, n + 1)
        {
            if(i == j) continue;

            if (!road[i][j])
            {
                road[i][j] = road[i][j] = 1;

                auto newCost = preCost;

                ll u = i, v = j;
                adj[u][v] = adj[v][u] = sqrtl((ve[u].first - ve[v].first) * (ve[u].first - ve[v].first) + (ve[u].second - ve[v].second) * (ve[u].second - ve[v].second));

                forn(i, 1, n + 1)
                {
                    forn(j, 1, n + 1)
                    {
                        newCost[i][j] = min(newCost[i][j], newCost[i][u] + adj[u][v] + newCost[v][j]);
                    }
                }

                ld t = 0;

                forn(i, 1, n + 1)
                {
                    forn(j, 1, n + 1)
                    {
                        t += preCost[i][j] - newCost[i][j];
                    }
                }

                if (abs(t - 1) < 1e-9 || t <= (1 + 1e-9))
                {
                    continue;
                }

                if (abs(ans - t) < 1e-9)
                {
                    pr.push_back({min(i, j), max(j, i)});
                }

                else if (ans < t)
                {
                    pr = {{min(i, j), max(i, j)}};
                    ans = t;
                }
            }
        }
    }

    if (pr.size() == 1 && pr.front().first == 100)
    {
        cout << "No road required" << nl;
        return;
    }

    sort(pr.begin(), pr.end());

    cout << pr.front().first << " " << pr.front().second << nl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Pre();

    // cin >> testcase;

    // ll test;
    // for(test = 1; test <= testcase; test++) {
    //     Solve(test);
    // }

    ll n, m;
    while (cin >> n >> m && (n || m))
    {
        Solve(n, m);
    }
    return 0;
}