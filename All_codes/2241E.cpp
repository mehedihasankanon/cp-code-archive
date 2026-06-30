// Bismillahir rahmanir rahim

// https://codeforces.com/contest/2241/problem/E
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

// google ai mode generated code
bool isPerfectSquare(long long n) {
    // Negative numbers cannot be perfect squares
    if (n < 0) return false;
    
    // Fast Bitwise Filter: Perfect squares in base 64 can only end in 
    // specific hex digits (0, 1, 4, 9, 16, 25, 33, 36, 41, 49, 57).
    // This look-up array filters out ~84% of non-squares in O(1) time.
    static const unsigned long long mask = 0x0202021202030213ULL; 
    if ((mask & (1ULL << (n & 63))) == 0) return false;

    // Core Check: Use round() instead of floor/casting to avoid 
    // precision issues like sqrt(25) yielding 4.99999
    long long root = std::round(std::sqrt(n));
    
    // Confirm if the squared root matches the original number
    return (root * root == n);
}


void Solve(ll test)
{
    ll n; cin >> n;

    vector<ll> p(n + 1), sqr;

    forn(i,1,n + 1)
    {
        cin >> p[i];

        if(isPerfectSquare(p[i]))
        {
            sqr.push_back(i);
        }
    }


    vector<vector<ll>> adj(n + 1);

    forn(i,0,n-1)
    {
        ll u, v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<ll>> children(n + 1);
    
    auto dfs = [&](auto&& self, ll node, ll parent) -> ll {
        
        ll childcnt = 0;

        for (ll child : adj[node]) {
            if (child != parent) {
                ll x = self(self, child, node);
                childcnt += x;
                children[node].push_back(x);
            }
        }

        children[node].push_back(n - 1 - childcnt);

        return childcnt + 1;
    };


    dfs(dfs, 1, -1);

    ll finans = 0;

    for(auto idx : sqr) {

        dbg(idx);

        ll t = children[idx].size(), sm = 0;
        dbgc(children[idx]);

        vector<ll> sums(children[idx].size() + 1, 0), prefsums(children[idx].size() + 1, 0);

        for(ll i = t - 1; i >= 0; i--)
        {
            sums[i] = sm * children[idx][i];
            sm += children[idx][i];
        }

        ll ans = accumulate(sums.begin(), sums.end(), 0LL);

        ll prefsm = 0;
        for(ll i = t - 2; i >= 0; i--)
        {
            prefsm += sums[i + 1];
            ans += prefsm * children[idx][i];
        }

        finans += ans;

    }


    cout << finans << nl;

}


int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        dbg(test);
        Solve(test);
    }
    return 0;
}