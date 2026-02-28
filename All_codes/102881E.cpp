// Bismillahir rahmanir rahim

// https://codeforces.com/gym/102881/problem/E
// ok

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
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)


// #define DEBUG

#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif

ll testcase = 1;

void Pre(void)
{

    return;
}


void Solve(ll test)
{
    ll n, q; cin >> n >> q;

    vector<ll> v(n);
    set<ll> xorr, orr;
    
    forn(i,0,n)
    {
        cin >> v[i];

        if(!(v[i] & 1))
        {
            orr.insert(i);
        }
        if(v[i] != 1)
        {
            xorr.insert(i);
        }
    }

    ll sum = accumulate(v.begin(), v.end(), 0LL);
    forn(i,0,q)
    {
        ll op, l, r;
        cin >> op >> l >> r;

        --l, --r;

        if(op == 1)
        {
            auto it = orr.lower_bound(l);

            while(it != orr.end() and *it <= r)
            {
                ll idx = *it;
                // it++;
                auto nxt = next(it);

                sum -= v[idx];
                v[idx] |= (v[idx] - 1);
                sum += v[idx];

                if(v[idx] & 1)
                {
                    orr.erase(idx);
                }
                if(v[idx] == 1)
                {
                    xorr.erase(idx);
                }
                it = nxt;
            }
        }
        if(op == 2)
        {
            auto it = xorr.lower_bound(l);

            while(it != xorr.end() and *it <= r)
            {
                ll idx = *it;
                // it++;
                auto nxt = next(it);

                sum -= v[idx];
                v[idx] ^= (v[idx] - 1);
                sum += v[idx];

                if(v[idx] & 1)
                {
                    orr.erase(idx);
                }
                if(v[idx] == 1)
                {
                    xorr.erase(idx);
                }
                it = nxt;
            }
        }

        cout << sum << nl;
    }
    return;
}

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("orxor.in", "r", stdin);

    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        // dbgc(test);
        Solve(test);
    }
    return 0;
}