// Bismillahir rahmanir rahim

// https://codeforces.com/contest/33/problem/B
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

void Solve(ll test)
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        cout << -1 << nl;
        return;
    }

    if (s1 == s2)
    {
        cout << 0 << nl << s1 << nl;
        return;
    }

    map<pair<char, char>, ll> mp;
    ll n;
    cin >> n;
    vector<vector<ll>> adj(26, vector<ll>(26, mod));

    forn(i, 0, 26) adj[i][i] = 0;

    ll ans;
    string s;

    forn(i, 0, n)
    {
        char a, b;
        ll c;
        cin >> a >> b >> c;
        if (a == b)
            continue;
        if (mp.count({a, b}))
        {
            mp[{a, b}] = min(c, mp[{a, b}]);
        }
        else
        {
            mp[{a, b}] = c;
        }

        adj[b - 'a'][a - 'a'] = mp[{a, b}]; // inverse graph
    }

    for (ll k = 0; k < 26; k++)
    {
        forn(i, 0, 26)
        {
            forn(j, 0, 26)
            {
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }

    ans = 0;
    s = "";

    forn(i, 0, s1.size())
    {
        ll add = mod;
        char ch = 0;
        char a = s1[i], b = s2[i];

        ll cost1 = mp.count({a, b}) ? mp[{a, b}] : mod,
           cost2 = mp.count({b, a}) ? mp[{b, a}] : mod;

        if (cost1 < mod and cost1 < cost2)
        {
            add = cost1;
            ch = b;
        }
        else if (cost2 < mod)
        {
            add = cost2;
            ch = a;
        }

        ll cost3 = adj[b - 'a'][a - 'a'];
        if (cost3 < mod and cost3 < add)
        {
            add = cost3;
            ch = b;
        }
        ll cost4 = adj[a - 'a'][b - 'a'];
        if (cost4 < mod and cost4 < add)
        {
            add = cost4;
            ch = a;
        }

        forn(j, 0, 26)
        {
            if (adj[j][a - 'a'] + adj[j][b - 'a'] < add)
            {
                add = adj[j][a - 'a'] + adj[j][b - 'a'];
                ch = 'a' + j;
            }
        }

        if (add < mod)
        {
            ans += add;
            s.push_back(ch);
        }
        else
        {
            cout << -1 << nl;
            return;
        }
    }

    if (s.size() < s1.size())
    {
        cout << -1 << nl;
        return;
    }

    cout << ans << nl << s << nl;
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