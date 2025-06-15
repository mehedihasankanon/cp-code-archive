// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/abc410/tasks/abc410_c
//

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    forn(i, 0, n) v[i] = i + 1;

    ll moved = 0;
    forn(i, 0, q)
    {
        ll tp;
        cin >> tp;
        if (tp == 1)
        {
            ll p, y;
            cin >> p >> y;
            p--;
            v[(p + moved) % n] = y;
        }
        else if (tp == 2)
        {
            ll p;
            cin >> p;
            p--;
            cout << v[(p + moved) % n] << nl;
        }
        else
        {
            ll k; cin >> k;
            moved += k;
        }
    }
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