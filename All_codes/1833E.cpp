// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1833/problem/E
// AC

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

#pragma GCC target("avx2")

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

bool bfs(ll node, vector<bool> &vis, map<ll, set<ll>> &edge)
{
    vector<ll> parent(vis.size(), -1);

    queue<ll> q;
    q.push(node);
    vis[node] = 1;

    bool cyc = 0;

    while(!q.empty())
    {
        ll curr = q.front();
        q.pop();

        for(auto t : edge[curr])
        {
            // cerr << curr << ": ";
            // cerr << t << " ";
            if(!vis[t])
            {
                vis[t] = 1;
                parent[t] = curr;
                q.push(t);
            }
            else
            {
                if(parent[curr] != t && parent[curr] != -1)
                {
                    // dbg(curr);
                    // dbg(t);
                    // dbg(parent[t]);
                    cyc = 1;
                }
            }
            // cerr << endl;
            
        }
    }

    return cyc;
}

void Solve(ll test)
{
    dbg(test);
    ll n;
    cin >> n;
    map<ll, set<ll>> edging;

    forn(i, 1, n + 1)
    {
        ll t;
        cin >> t;
        edging[t].insert(i);
        edging[i].insert(t);
    }

    ll cycles= 0, chains = 0;
    vector<bool> vis(n + 1, 0);

    forn(i, 1, n + 1)
    {
        if (!vis[i])
        {
            if (bfs(i, vis, edging))
            {
                cycles++;
            }
            else
            {
                chains++;
            }
        }
    }

    // dbg(cycles);
    // dbg(chains);

    cout << cycles + (chains > 0) << " " << cycles + chains << nl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Pre();

    cin >> testcase;

    ll test;
    for (test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}