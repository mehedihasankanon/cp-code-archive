// Bismillahir Rahmanir Rahim

// link    : https://atcoder.jp/contests/abc241/tasks/abc241_d
// status  : AC

#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 

// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")

using namespace std;
// using namespace __gnu_pbds;

// #define ordered_set(type) tree<type, null_type, less<type>, rb_tree_tag, tree_order_statistics_node_update>

using ll = long long;
using ld = long double;

ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;

#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i, s, e) for (ll i = s; i < e; i++)
#define rfor(i, s, e) for (ll i = s; i >= e; i--)

ll testcase = 1;

void Pre(void)
{

    return;
}

void Solve(ll test)
{
    // ordered_set(ll) s;

    ll q;
    cin >> q;
    // forn(i, 0, q)
    // {
    //     ll tp;
    //     cin >> tp;
    //     if (tp == 1)
    //     {
    //         ll x;
    //         cin >> x;
    //         s.insert(x);
    //     }
    //     else if(tp == 2)
    //     {
    //         ll x, k; cin >> x >> k;
    //         if(s.order_of_key(x) + 1 < k)
    //         {
    //             cout << -1 << NL;
    //         }
    //         else
    //         {
    //             auto it = s.find(x);
    //             advance(it,-k+1);
    //             cout << *it << NL;
    //         }
    //     }
    //     else 
    //     {
    //         ll x, k; cin >> x >> k;
    //         if(s.size() - s.order_of_key(x) - 1 < k)
    //         {
    //             cout << -1 << NL;
    //         }
    //         else
    //         {
    //             auto it = s.find(x);
    //             advance(it,-k);
    //             cout << *it << NL;
    //         }
    //     }
    // }

    multiset<ll> s;
    forn(i, 0, q)
    {
        ll tp;
        cin >> tp;
        if (tp == 1)
        {
            ll x;
            cin >> x;
            s.insert(x);
            // for(auto it : s) cerr << it << " ";
            // cerr << NL;
        }
        else if(tp == 2)
        {
            ll x, k; cin >> x >> k;
            // int t = s.lower_bound(x) - s.begin();
            auto it = s.upper_bound(x);
            int i = 0;
            // for(i = 1; it != s.begin() && i <= k; i++) --it;
            while(it != s.begin())
            {
                if(i == k) break;
                it--; i++;
            }
            if(i != k) cout << -1 << NL;
            else cout << *it << NL;
        }
        else 
        {
            ll x, k; cin >> x >> k; k--;
            // int t = s.lower_bound(x) - s.begin();
            auto it = s.lower_bound(x);
            int i = 0;
            // for(i = 1; it != s.begin() && i <= k; i++) --it;
            while(it != s.end())
            {
                if(i == k) break;
                it++; i++;
            }
            if(i != k || it == s.end()) cout << -1 << NL;
            else cout << *it << NL;
        }
    }
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
        Solve(test);
    }
    return 0;
}