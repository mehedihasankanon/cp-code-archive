// Bismillahir rahmanir rahim

// https://codeforces.com/contest/2120/problem/C
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

ll n, s;

ll find(ll a)
{
    ll r = 1e6 + 10, l = 0;

    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        if((mid * (mid - 1)) / 2 < a) l = mid;
        else r = mid;
    }

    return l;

    // ll ans = 1;
    // while (1)
    // {
    //     if (ans * (ans - 1) / 2 >= a)
    //     {
    //         // if(s - ans * (ans - 1) <= )
    //         return ans - 1;
    //     }
    //     ans++;
    // }
}

void Solve(ll test)
{
    cin >> n >> s;
    // s -= n;

    if (s < n || s >= n * (n + 1) / 2)
    {
        cout << -1 << nl;
        return;
    }

    if (s == n)
    {
        cout << 1 << nl;
        forn(i, 2, n + 1)
        {
            cout << 1 << " " << i << nl;
        }
        return;
    }

    if (s == (n * (n + 1)) / 2)
    {
        cout << n << nl;

        forn(i, 1, n)
        {
            cout << n << " " << i << nl;
        }
        return;
    }

    ll root = find(s - n);

    s -= (root * (root - 1)) / 2;

    // if(s < n - root)
    // {
    //     s += root - 1;
    //     root--;
    // }

    cout << root << nl;
    s -= root;
    forn(i, 1, root)
    {
        cout << root << " " << i << nl;
    }

    if (root == n)
    {
        return;
    }

    // if(s & 1)
    // {
    //     cout << 2 << " " << root + 1 << nl;
    // }
    // else
    // {
    //     cout << 1 << " " << root + 1 << nl;
    // }

    // forn(i,root + 1, n+1)
    // {
    //     cout << 1 << " "
    // }

    // ll rem = s / (root - 1);
    // if(s == 0)
    // {
    //     cout <<
    // }

    // forn(i,root + 1, n)
    // {
    //     cout << 1 << " " << i << nl;
    //     s--;
    // }

    // cout << s << " " << n << nl;

    s -= ( n -  root);

    ll v = root + 1;
    while (s)
    {
        ll t = root - 1;
        if(t <= s)
        {
            cout << t + 1 << " " << v << nl;
            forn(i,v + 1, n + 1)
            {
                cout << 1 << " " << i << nl;
            }
            return;
        }
        s -= t;
        v++;
    }
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