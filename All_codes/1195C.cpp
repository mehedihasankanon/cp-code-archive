// Bismillahir rahmanir rahim

// https://codeforces.com/problemset/problem/1195/C
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

ll ans(ll curr_idx, ll curr_row, vector<vector<ll>> &dp, vector<vector<ll>> &h)
{

    if(curr_idx < 0) return 0;

    if (dp[curr_idx][curr_row] != -1)
        return dp[curr_idx][curr_row];

    return dp[curr_idx][curr_row] = max(h[curr_idx][curr_row] + ans(curr_idx - 1, (1-curr_row), dp, h), ans(curr_idx - 1, (curr_row), dp, h));
}

void Solve(ll test)
{
    ll n;
    cin >> n;
    vector<vector<ll>> h(n, vector<ll>(2));

    forn(j, 0, 2)
    {
        forn(i, 0, n)
        {
            cin >> h[i][j];
        }
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(2, -1));

    cout << max(ans(n - 1, 0, dp, h), ans(n - 1, 1, dp, h)) << nl;

    // forn(i,0,2)
    // {
    //     forn(j,0,n) cout << dp[j][i] << " ";

    //     cout << nl;
    // }

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
        dbg(test);
        Solve(test);
    }
    return 0;
}