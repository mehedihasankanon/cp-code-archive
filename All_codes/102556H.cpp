// Bismillahir rahmanir rahim

// https://codeforces.com/gym/102556/problem/H#/
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

const long long Pmax = sqrtl(1e15) + 5;
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
            primes.emplace_back(i);
        }
    }
}

void Pre(void)
{
    // sieve();

    return;
}

void Solve(ll test)
{
    ll n;
    cin >> n;

    map<ll, ll> mp;

    if (!(n & 1))
    {
        while (!(n & 1))
        {
            mp[2]++;
            n >>= 1;
        }
    }

    for (ll i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 2)
    {
        mp[n]++;
    }

    if (mp.size() == 1)
    {
        ll t = (*mp.begin()).second;

        for (ll i = 2; i * i < t; i++)
        {
            if (t % i == 0)
            {
                if (i * (i + 1) == t)
                {
                    ll b = (*mp.begin()).first, ans = 1;
                    while (t)
                    {
                        ans = ans * b;
                        t--;
                    }

                    cout << ans << nl;
                    return;
                }
            }
        }

        cout << -1 << nl;
        return;
    }

    vector<pair<ll, ll>> v;

    for (auto t : mp)
    {
        v.push_back(t);
    }

    ll g = gcd(2 * v[0].second, 2 * v[1].second);

    forn(i, 2, v.size())
    {
        g = gcd(g, 2 * v[i].second);
    }

    vector<ll> factors = {g};

    ll i = 2;
    for (; i * i < g; i++)
    {
        if (g % i == 0)
            factors.push_back(i), factors.push_back(g / i);
    }

    if (i * i == g)
        factors.push_back(i);

    for (auto d : factors)
    {
        ll test = 1;

        for (auto u : v)
        {
            test *= (1 + ((2 * u.second) / d));
        }

        if (test == g)
        {
            ll ans = 1;

            for (auto u : v)
            {
                while (u.second)
                {
                    ans *= u.first;
                    u.second--;
                }
            }

            cout << ans << nl;
            return;
        }
    }

    cout << -1 << nl;
    return;

    cout << -1 << nl;
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
        // dbgc(test);
        Solve(test);
    }
    return 0;
}