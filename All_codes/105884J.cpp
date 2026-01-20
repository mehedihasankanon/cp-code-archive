// Bismillahir rahmanir rahim

//
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

ll mxn = 3e5 + 5;
vector<ll> spf;
vector<ll> factorial;
void sieveSPF()
{
    forn(i, 2, mxn)
    {
        if (!spf[i])
        {
            spf[i] = i;

            if (i * i >= mxn)
                continue;

            for (ll j = i * i; j < mxn; j += i)
            {
                if (!spf[j])
                    spf[j] = i;
            }
        }
    }
}

ll binExp(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (1LL * res * a) % mod;
        }
        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return res;
}

vector<ll> fct(ll m)
{
    ll x;
    vector<ll> su;

    while (m >= 2)
    {
        x = spf[m];
        su.emplace_back(x);

        while (m % x == 0)
        {
            m /= x;
        }
    }

    return su;
}

ll binMul(ll a, ll b, ll m)
{
    ll res = 0;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res + a) % m;
        }
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

ll C(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    return binMul(factorial[n], binExp(binMul(factorial[n - r], factorial[r], mod), mod - 2), mod);
}

void Pre(void)
{
    spf.assign(mxn, 0);
    factorial.assign(mxn, 1);

    sieveSPF();

    forn(i, 1, mxn)
    {
        factorial[i] = (i * factorial[i - 1]) % mod;
    }
    return;
}

void Solve(ll test)
{

    ll n, k;
    cin >> n >> k;

    map<ll, ll> mp;

    forn(i, 0, n)
    {
        ll x;
        cin >> x;

        for (auto it : fct(x))
        {
            mp[it]++;
        }
    }

    ll ans = 0;
    for (auto [prime, count] : mp)
    {
        ll contribution = (C(n, k) - C(n - count, k) + mod) % mod;
        ans = (ans + (prime * contribution) % mod) % mod;
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

    cin >> testcase;

    ll test;
    for (test = 1; test <= testcase; test++)
    {
        // dbgc(test);
        Solve(test);
    }
    return 0;
}