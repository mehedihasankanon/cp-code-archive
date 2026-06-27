// Bismillahir rahmanir rahim

// https://codeforces.com/problemset/problem/414/B
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

// using ll = long long;
using ll = int;
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

const long long Pmax = 1000000;
vector<bool> prime(Pmax + 10, true);
vector<long long> primes;

void sieve(void)
{
    prime[1] = false;

    primes.push_back(2);
    for (long long i = 4; i <= Pmax; i += 2)
        prime[i] = false;

    for (long long i = 3; i <= Pmax; i += 2)
    {
        if (prime[i])
        {
            for (long long j = i * i; j <= Pmax; j += i)
            {
                prime[j] = false;
            }
            primes.push_back(i);
        }
    }
}

const int N = 2005;
vector<int> divisors[N + 1];

void build_divisors()
{
    for (int d = 1; d <= N; d++)
    {
        for (int m = d; m <= N; m += d)
        {
            divisors[m].push_back(d);
        }
    }
}

void Pre(void)
{

    build_divisors();

    return;
}

void Solve(ll test)
{
    ll n, k;
    cin >> n >> k;

    ll dp[n + 5][k + 5];

    forn(i, 1, n + 1) dp[i][1] = 1;

    forn(j, 2, k + 1)
    {
        forn(i, 1, n + 1)
        {
            dbg(i);
            dbg(j);
            dp[i][j] = 0;
            for (auto x : divisors[i])
            {
                dp[i][j] = (dp[i][j] + dp[x][j - 1]) % mod;
            }
            dbg(dp[i][j]);
        }
    }

    // forn(i, 1, n + 1)
    // {
    //     forn(j, 1, k + 1)
    //     {
    //         cerr << dp[i][j] << " ";
    //     }
    //     cerr << nl;
    // }

    ll ans = 0;
    forn(i, 1, n + 1)
    {
        ans = (ans + dp[i][k]) % mod;
    }

    cout << ans << nl;
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