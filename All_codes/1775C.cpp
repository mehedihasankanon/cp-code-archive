// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1775/problem/C
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

void Solve(ll test)
{
    ll n, x;
    cin >> n >> x;

    if (n < x)
    {
        cout << -1 << nl;
        return;
    }

    if (n == x)
    {
        cout << x << nl;
        return;
    }

    ll msb = 63, t = n;
    while (!((t >> msb) & 1))
    {
        msb--;
    }

    ll u = x;
    // msb--;
    while(msb >= 0)
    {
        if(!((u >> msb) & 1LL) and ((t >> msb) & 1LL))
        {
            for(ll i = msb - 1; i >= 0; i--)
            {
                if(((u >> i) & 1))
                {
                    cout << -1 << nl;
                    return;
                }
            }

            if(((t >> (msb + 1)) & 1LL))
            {
                cout << -1 << nl;
                return;
            }

            cerr << ((t >> msb) << msb) << " " << (1LL << (msb + 1)) << nl;

            ll v = ((t >> (msb + 1)) << (msb + 1));
            v |= (1LL << (msb + 1));

            cout << v << nl;
            return;
        }
        msb--;
    }

    cout << -1 << nl;
    return;

    cout << "??" << nl;
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