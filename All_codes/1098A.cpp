// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1098/problem/A
// editorial

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

void dfs(ll node, ll parent, vector<vector<ll>> &adj, vector<ll> &sum, vector<ll> &height, ll &ans)
{
    if (!height[node])
    {
        height[node] = height[parent] + 1;

        if (height[node] % 2 == 0)
        {
            ll mn = 2e18;
            for (auto t : adj[node])
            {
                if (t != parent)
                {
                    mn = min(mn, sum[t]);
                }
            }
            sum[node] = (mn == 2e18) ? sum[parent] : mn;

            if (sum[node] < sum[parent])
            {
                ans = -1;
                return;
            }
        }

        ans += sum[node] - sum[parent];

        for (auto child : adj[node])
        {
            dfs(child, node, adj, sum, height, ans);
            if (ans == -1)
                return;
        }
    }
    else
    {
        // node 1
        ans += sum[node];
        for (auto child : adj[node])
        {
            dfs(child, node, adj, sum, height, ans);
            if (ans == -1)
                return;
        }
        return;
    }
}

void Solve(ll test)
{
    ll n;
    cin >> n;

    vector<vector<ll>> adj(n + 1);
    vector<ll> sum(n + 1, 0);
    vector<ll> height(n + 1, 0);
    height[1] = 1;

    forn(i, 2, n + 1)
    {
        ll p;
        cin >> p;
        adj[p].push_back(i);
    }

    forn(i, 1, n + 1) cin >> sum[i];

    ll ans = 0;

    dfs(1, 0, adj, sum, height, ans);
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