// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1787/problem/C
// editorial, needed help for the dp idea implementation
// got till the fact that either maximum or minimum and dp will be needed
// need some more dp practice atp

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

#define ff first 
#define ss second

ll testcase = 1;

void Pre(void)
{

    return;
}


void Solve(ll test)
{
    ll n, s; cin >> n >> s;
    vector<pair<ll,ll>> v(n + 1);
    forn(i,1,n+1)
    {
        ll x; cin >> x;
        if(i == 1 || i == n)
        {
            v[i].first = v[i].second = x;
        }
        else
        {
            if(x < s)
            {
                v[i].ff = 0, v[i].ss = x;
            }
            else
            {
                v[i].ff = s, v[i].ss = x - s;
            }
        }
    }

    vector<vector<ll>> dp(n + 2, vector<ll>(2,0));

    dp[1][0] = dp[1][1] = 0;

    forn(i,2,n+1)
    {
        dp[i][0] = min(dp[i - 1][0] + v[i - 1].ss * v[i].ff, dp[i - 1][1] + v[i - 1].ff * v[i].ff);
        dp[i][1] = min(dp[i - 1][0] + v[i - 1].ss * v[i].ss, dp[i - 1][1] + v[i - 1].ff * v[i].ss);
    }

    cout << min(dp[n][0], dp[n][1]) << nl;


}

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}