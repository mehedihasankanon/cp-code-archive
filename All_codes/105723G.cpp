// Bismillahir rahmanir rahim

// https://codeforces.com/gym/105723/problem/G
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

// ll mod = 1000000007;
ll mod = 998244353;

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

const ll MAX_SQRT = 32000;
vector<ll> primes;

void sieve()
{
    vector<bool> is_prime(MAX_SQRT + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll p = 2; p * p <= MAX_SQRT; p++)
    {
        if (is_prime[p])
        {
            for (ll i = p * p; i <= MAX_SQRT; i += p)
                is_prime[i] = false;
        }
    }
    for (ll p = 2; p <= MAX_SQRT; p++)
    {
        if (is_prime[p])
            primes.push_back(p);
    }
}

ll testcase = 1;

void Pre(void)
{

    sieve();
    return;
}

long long power(long long base, long long exp)
{
    long long res = 1;
    long long mod = 998244353;
    base %= mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void Solve(ll test)
{
    ll a, n;
    cin >> a >> n;

    vector<ll> qi;

    ll t = a;

    for (ll p : primes)
    {
        if (p * p > t)
        {
            break;
        }

        if (t % p == 0)
        {
            ll c = 0;
            while (t % p == 0)
            {
                c++;
                t /= p;
            }
            qi.push_back(c);
        }
    }
    if (t > 1)
    {
        qi.push_back(1);
    }
    ll ans = 1;

    for (ll q : qi)
    {
        ans = (ans * (power(q + 1, n) + power(q - 1, n) - 2 * power(q, n))) % mod;
    }

    cout << (ans + mod) % mod << nl;
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