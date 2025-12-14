// Bismillahir rahmanir rahim

// https://judge.yosupo.jp/problem/shortest_path
// Fully correct algorithm

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
    ll n, m, s, t; cin >> n >> m >> s >> t;

    vector<vector<pair<ll,ll>>> adj(n+1);

    forn(i,0,m)
    {
        ll a, b, c;
        cin >>a >> b >> c;
        adj[a].push_back({b,c});
    }

    vector<ll> d(n+1, 1e15), p(n + 1, -1);
    vector<vector<ll>> chi(n + 1);

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0,s});
    d[s] = 0;

    while(!pq.empty())
    {
        auto [dist, node] = pq.top(); pq.pop();

        if(dist != d[node])
        {
            continue;
        }
        
        for(auto [child, wt] : adj[node])
        {
            if(d[child] > d[node] + wt)
            {
                d[child] = d[node] + wt;
                p[child] = node;
                pq.push({d[child], child});
            }
        }
    }


    // vector<ll> path;

    // return;

    vector<ll> path;
    ll ans = d[t];
    while(p[t] != -1)
    {
        path.push_back(t);
        t = p[t];
    }

    if(path.empty())
    {
        cout << -1 << nl;
        return;
    }

    path.push_back(s);

    cout << ans << " " << path.size() - 1 << nl;
    reverse(path.begin(), path.end());

    forn(i,0,path.size() - 1)
    {
        cout << path[i] << " " << path[i + 1] << nl;
    }
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