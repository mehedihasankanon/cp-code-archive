// Bismillahir rahmanir rahim

// https://vjudge.net/problem/UVA-423
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


void Solve(ll test)
{
    ll n; cin >> n;

    typedef struct Edge {
        ll from, to, cost;
    } Edge;

    vector<Edge> edges;

    forn(i,1,n+1)
    {
        forn(j,1,i)
        {
            string s; cin >> s;
            if(s == "x") continue;

            edges.push_back(Edge{i,j, stol(s)});
            edges.push_back(Edge{j,i, stol(s)});
        }
    }

    
    // now the bellman ford
    vector<ll> d(n+1, 1e15);
    d[1] = 0;

    forn(i,0,n-1)
    {
        for(Edge e : edges)
        {
            if(d[e.to] > d[e.from] + e.cost)
            {
                d[e.to] = d[e.from] + e.cost;
            }
        }
    }

    ll ans = -1;
    for(auto t : d)
    {
        if(t != 1e15)
        ans = max(t,ans);
    }
    cout << ans << nl;
    return;
}

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}