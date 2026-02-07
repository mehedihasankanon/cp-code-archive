// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1826/problem/D
// wa, ac

// wrong logic the first time

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
    ll n;
    cin >> n;

    vector<ll> v(n);
    forn(i, 0, n) cin >> v[i];

    vector<pair<ll, ll>> prefmax(n + 2), suffmax(n + 2);

    prefmax[0] = {v[0], 0};
    suffmax[n - 1] = {v[n - 1], n - 1};
    forn(i, 1, n)
    {
        if (prefmax[i - 1].first - (i - prefmax[i - 1].second) > v[i])
        {
            prefmax[i] = prefmax[i - 1];
        }
        else
        {
            prefmax[i] = {v[i], i};
        }
    }

    forr(i, n - 2, 0)
    {
        if (suffmax[i + 1].first - (suffmax[i + 1].second - i) > v[i])
        {
            suffmax[i] = suffmax[i + 1];
        }
        else
        {
            suffmax[i] = {v[i], i};
        }
    }

    ll ans = 0;

    forn(i, 1, n - 1)
    {
        ans = max(ans, prefmax[i - 1].first + v[i] + suffmax[i + 1].first - (suffmax[i + 1].second - prefmax[i - 1].second));
    }

    cout << ans << nl;
    return;

    // vector<pair<ll, ll>> v;
    // forn(i, 0, n)
    // {
    //     ll x;
    //     cin >> x;
    //     v.push_back({x, i});
    // }

    // sort(v.begin(), v.end(), [](pair<ll, ll> &a, pair<ll, ll> &b)
    //      { return a.first > b.first or a.first == b.first and a.second > b.second; });

    //      ll ans = 0LL;
    // forn(i,0,n - 2)
    // {
    //     vector<ll> a;
    //     forn(j,i,i+3)
    //     {
    //         a.push_back(v[j].second);
    //     }
    //     sort(a.begin(), a.end());

    //     ans = max(ans, v[i].first + v[i + 1].first + v[i + 2].first + a.front() - a.back());
    // }

    // cout << ans << nl;
    // return;
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