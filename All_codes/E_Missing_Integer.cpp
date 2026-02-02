// Bismillahir rahmanir rahim

// CUET IUPC 24
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

string mu(ll x)
{
    cout << "MUL " << x << endl;
    string s;
    cin >> s;
    return s;
}

string di(ll x)
{
    cout << "DIV " << x << endl;
    string s;
    cin >> s;
    return s;
}

string ve(ll x)
{
    cout << "VERIFY " << x << endl;
    string s;
    cin >> s;
    return s;
}

void Solve(ll test)
{
    ll bit = 29;
    while (bit && true)
    {
        mu((1 << bit) + 1);
        string s = di((1 << bit));

        if (s == ">")
        {
            break;
        }
        bit--;
    }

    if (bit == 0)
    {
        ve(1);
        return;
    }

    mu(999999999);
    string s = di(1000000000);
    // string s = mu(1);
    // di(1);
    if (s != "=")
    {
        ve(1000000000);
        return;
    }

    di(1 << bit);
    ll lo = (1 << bit), hi = min((1LL << (bit + 1)) - 1LL, (ll)1e9);

    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;

        s = mu(mid);

        if (s == "=")
        {
            ve(mid);
            return;
        }

        if (s == "<")
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
        di(mid);
    }

    ve(lo);
    return;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
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