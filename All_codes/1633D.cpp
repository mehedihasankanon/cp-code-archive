// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1633/problem/D
// AC (had to look at the part of finding the cost of reaching the numbers)

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

vector<ll> cost(1e3 + 10, 1e18);

void Pre(void)
{
    cost[1] = 0;
    forn(i, 1, 1e3 + 5)
    {
        forn(j, 1, i + 1)
        {
            ll t = i + (i / j);
            if (t < 1e3 + 5)
                cost[t] = min(cost[i] + 1, cost[t]);
        }
    }
    // dbgc(cost);

    return;
}

ll ans(ll curr_idx, ll curr_wt, vector<vector<ll>> &dp, vector<ll> &b, vector<ll> &c)
{
    if (curr_idx >= b.size())
        return 0;

    if (dp[curr_idx][curr_wt] != -1)
        return dp[curr_idx][curr_wt];

    if (curr_wt - b[curr_idx] >= 0)
    {
        dp[curr_idx][curr_wt] = max(c[curr_idx] + ans(curr_idx + 1, curr_wt - b[curr_idx], dp, b, c), ans(curr_idx + 1, curr_wt, dp, b, c));
    }
    else
    {
        dp[curr_idx][curr_wt] = ans(curr_idx + 1, curr_wt, dp, b, c);
    }
    return dp[curr_idx][curr_wt];
}

void Solve(ll test)
{
    ll n, k;
    cin >> n >> k;
    vector<ll> b(n), c(n);
    forn(i, 0, n)
    {
        ll x;
        cin >> x;
        b[i] = cost[x];
        // while((1LL << b[i]) < x) b[i]++;
    }
    ll tot = 0;
    forn(i, 0, n)
    {
        cin >> c[i];
        tot += b[i];
    }

    if (tot <= k)
    {
        ll ans = 0;
        forn(i, 0, n) ans += c[i];
        cout << ans << nl;
        return;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, -1));
    cout << ans(0, k, dp, b, c) << nl;
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