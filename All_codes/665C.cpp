// Bismillahir rahmanir rahim

// https://codeforces.com/problemset/problem/665/C
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
    string s;
    cin >> s;

    vector<pair<ll, ll>> v;

    ll n = s.size();

    if (n == 1)
    {
        cout << s << nl;
        return;
    }

    ll l = 0, r = (s[1] == s[0]);

    while (l < n)
    {
        while (r < n and s[l] == s[r])
        {
            r++;
        }

        if (r > l + 1)
        {
            v.push_back({l, r - 1});
        }
        l = r;
    }

    for (auto [l, r] : v)
    {

        dbg(l);
        dbg(r);

        ll sz = (r - l + 1);

        if ((sz & 1))
        {
            char ch = 'a';

            while (ch == s[r])
            {
                ch++;
            }

            dbg(ch);

            for (ll t = l + 1; t < r; t += 2)
            {
                s[t] = ch;
            }
        }
        else
        {
            if (r == n - 1)
            {
                char ch = 'a';

                while (ch == s[r])
                {
                    ch++;
                }

                dbg(ch);

                for (ll t = l + 1; t <= r; t += 2)
                {
                    s[t]= ch;
                }
            }
            else
            {
                char ch = 'a';

                while (ch == s[r] or ch == s[r + 1])
                {
                    ch++;
                }

                dbg(ch);

                for (ll t = l + 1; t <= r; t += 2)
                {
                    s[t] = ch;
                }
            }
        }
    }

    cout << s << nl;
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