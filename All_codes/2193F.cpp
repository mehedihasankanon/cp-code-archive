// Bismillahir rahmanir rahim

// https://codeforces.com/contest/2193/problem/F#/
//

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
    ll n, ax, ay, bx, by;
    cin >> n >> ax >> ay >> bx >> by;

    map<ll, pair<ll, ll>> mp;
    vector<ll> x(n), y(n);

    forn(i, 0, n)
    {
        cin >> x[i];
    }

    forn(i, 0, n)
    {
        cin >> y[i];
    }

    forn(i, 0, n)
    {
        ll xi = x[i], yi = y[i];
        if (mp.count(xi))
        {
            auto t = mp[xi];
            mp[xi] = {min(t.first, yi), max(t.second, yi)};
        }
        else
        {
            mp[xi] = {yi, yi};
        }
    }

    auto dist = [&](pair<ll, ll> a, pair<ll, ll> b)
    {
        return llabs(a.first - b.first) + llabs(a.second - b.second);
    };

    set<ll> st;
    for (auto xi : x)
        st.insert(xi);

    x.assign(0, 0);
    for (auto t : st)
        x.push_back(t);

    n = x.size();

    vector<vector<ll>> dp(n + 5, {mod * mod, mod * mod});

    ll lo0 = mp[x[0]].first, hi0 = mp[x[0]].second;
    dp[0][0] = (x[0] - ax) + llabs(ay - hi0) + (hi0 - lo0);
    dp[0][1] = (x[0] - ax) + llabs(ay - lo0) + (hi0 - lo0);

    forn(i, 1, n)
    {
        ll lop = mp[x[i - 1]].first, hip = mp[x[i - 1]].second;
        ll loc = mp[x[i]].first, hic = mp[x[i]].second;

        dp[i][0] = min(dp[i - 1][0] + llabs(lop - hic), dp[i - 1][1] + llabs(hip - hic)) + (x[i] - x[i - 1]) + (hic - loc);
        dp[i][1] = min(dp[i - 1][0] + llabs(lop - loc), dp[i - 1][1] + llabs(hip - loc)) + (x[i] - x[i - 1]) + (hic - loc);
    }

    ll lof = mp[x[n - 1]].first, hif = mp[x[n - 1]].second;
    ll ans = min(dp[n - 1][0] + dist({x[n - 1], lof}, {bx, by}), dp[n - 1][1] + dist({x[n - 1], hif}, {bx, by}));

    cout << ans << nl;
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
        // dbgc(test);
        Solve(test);
    }
    return 0;
}