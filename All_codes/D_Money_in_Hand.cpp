// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/abc286/tasks/abc286_d
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

bool dfs(ll curr_sum, ll curr_idx, vector<ll> &coins, vector<vector<ll>> &vis)
{
    //
    // dp idea: we check if it is possible to reach zero or not 
    //

    // if(curr_sum >= vis[0].size()) return 0;
    if(curr_sum == 0) return 1;

    // dbg(curr_idx);
    // dbg(curr_sum);

    if(curr_idx > coins.size()) return 0;
    if(curr_sum < 0) return 0;


    

    if(vis[curr_idx][curr_sum] != -1) return vis[curr_idx][curr_sum];

    return vis[curr_idx][curr_sum] = dfs(curr_sum - coins[curr_idx - 1], curr_idx + 1, coins, vis)
                                     || dfs(curr_sum, curr_idx + 1, coins, vis);
}


void Solve(ll test)
{
    ll n, x; cin >> n >> x;
    vector<ll> c;
    forn(i,0,n)
    {
        ll a, b; cin >> a >> b;
        forn(i,0,b) c.push_back(a);
    }


    // dbg(c.size());
    // dbgc(c);

    vector<vector<ll>> vis(c.size() + 1, vector<ll>(x + 1, -1));

    if(dfs(x, 1, c, vis))
    {
        

        // forn(i,0,c.size()) 
        // {
        //     forn(j,0,x+1) cerr << vis[i][j] << "\t";
        //     cerr << nl;
        // }
        cout << "Yes" << nl;
        return;
    }

    // forn(i,0,c.size()) 
    // {
    //     forn(j,0,x+1) cerr << vis[i][j] << "\t";
    //     cerr << nl;
    // }


    cout << "No" << nl;
    return;

}

int main()
{   

    // freopen("D_err.txt","w",stderr);
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}