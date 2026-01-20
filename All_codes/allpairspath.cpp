// Bismillahir rahmanir rahim

// https://open.kattis.com/problems/allpairspath
// ac

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

void Solve(ll n, ll m, ll q)
{
    vector<vector<ll>> adj(n, vector<ll>(n, mod));

    for(int i = 0; i < n; i++) adj[i][i] = 0;

    forn(i, 0, m)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);
    }

    forn(k, 0, n)
    {
        forn(i, 0, n)
        {
            forn(j, 0, n)
            {
                if(adj[i][k] < mod and adj[k][j] < mod)
                adj[i][j] = min(adj[i][k] + adj[k][j], adj[i][j]);
            }
        }
    }

    forn(i, 0, q)
    {
        ll s, t;
        cin >> s >> t;

        if (adj[s][t] == mod)
        {
            cout << "Impossible" << nl;
            continue;
        }

        bool ng = false;
        forn(k, 0, n)
        {
            // if k is a member of a negative cycle, adj[k][k] holds 
            if (adj[k][k] < 0 && adj[s][k] < mod && adj[k][t] < mod)
            {
                ng = true;
                break;
            }
        }

        if (ng)
            cout << "-Infinity" << nl;
        else
            cout << adj[s][t] << nl;
    }
    cout << nl;
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

    ll n, m, q;
    while (cin >> n >> m >> q && (n || m || q))
    {
        Solve(n, m, q);
    }
    return 0;
}