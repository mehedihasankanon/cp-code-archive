// Bismillahir rahmanir rahim

// https://vjudge.net/problem/LightOJ-1028
// AC

// #pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

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

ll testcase = 1;

// Perform (a^d)%n using binary exponentiation
ll power(ll a, ll d, ll n)
{
    ll res = 1;
    a %= n;
    while (d)
    {
        if (d & 1)
            res = (__int128)res * a % n; // Use __int128 to avoid overflow
        a = (__int128)a * a % n;
        d >>= 1;
    }
    return res;
}

bool MillerRabin(ll n, int k = 5)
{ // k = number of iterations (higher k -> higher accuracy)
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;

    // Write n-1 as d*2^r
    ll d = n - 1;
    ll r = 0;
    while ((d & 1) == 0)
    {
        d >>= 1;
        r++;
    }

    // Use small bases for testing (good enough for n < 2^64)
    vector<ll> bases = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (ll a : bases)
    {
        if (a >= n)
            break;
        ll x = power(a, d, n);
        if (x == 1 || x == n - 1)
            continue;

        bool composite = true;
        for (ll i = 0; i < r - 1; i++)
        {
            x = (__int128)x * x % n;
            if (x == n - 1)
            {
                composite = false;
                break;
            }
        }
        if (composite)
            return false;
    }
    return true;
}

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

void Pre(void)
{
    sieve();

    return;
}

void Solve(ll test)
{
    ll n;
    cin >> n;
    cout << "Case " << test << ": ";

    ll ans = 1;
    for (auto p : primes)
    {
        if (__int128_t(p) * p * p > n)
            break;
        ll t = 1;
        while (n % p == 0)
        {
            t++;
            n /= p;
        }
        ans *= t;
        ans %= mod;
    }

    // dbg(n);

    if (n != 1)
    {
        ll sqrt_n = sqrtl(n);
        if (sqrt_n * sqrt_n == n && MillerRabin(sqrt_n))
        {
            // leftover n is square of prime
            ans *= 3;
        }
        else if (MillerRabin(n))
        {
            // leftover n is prime
            ans *= 2;
        }
        else
        {
            // leftover n is composite with two distinct primes
            ans *= 4;
        }
    }

    cout << ans - 1 << nl;
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

// vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv