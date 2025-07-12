// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/abc285/tasks/abc285_d
// ac

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

// bool dfs(string node, map<string,string> &adj, map<string,bool> &vis)
// {
//     vis[node] = 1;

//     if(adj[node] != "")
//     {
//         if(vis[adj[node]])
//         {
//             // cerr << node << " " << adj[node] << nl;
//             return false; // reached the end of a cycle --> unwanted
//         }
//         return dfs(adj[node], adj, vis);
//     }

//     return true; // reached an endpoint
// }


void Solve(ll test)
{
    ll n; cin >> n;
    map<string,string> adj;
    vector<string> strings;

    forn(i,0,n)
    {
        string from, to; cin >> from >> to;
        if(adj.count(to))
        {
            // cerr << "1" << nl;
            cout << "No" << nl;
            return;
        }
        adj[to] = from;
    }

    // now check for circles in the inverse graph

    // dbgcc(adj);

    // for(auto [u,v] : adj)
    // {
    //     if(1)
    //     {
    //         map<string,bool> vis;
    //         if(!dfs(u,adj,vis))
    //         {
    //             // cerr << 2 << nl;
    //             // dbgcc(vis);
    //             cout << "No" << nl;
    //             return;
    //         }
    //     }
    // }

    map<string, ll> ind;
    set<string> st;
    for(auto [u,v] : adj)
    {
        ind[v]++;
        st.insert(u);
        st.insert(v);
    }

    queue<string> q;

    ll sz = st.size(), vis = 0;

    for(auto str : st)
    {
        if(ind[str] == 0)
        {
            q.push(str);
        }
    }

    while(!q.empty())
    {
        string str = q.front();
        q.pop();
        vis++;

        if(adj[str] != "")
        {
            ind[adj[str]]--;
            if(ind[adj[str]] == 0)
            {
                q.push(adj[str]);
            }
        }
    }

    if(vis != sz)
    {
        cout << "No" << nl;
        return;
    }

    

    cout << "Yes" << nl;
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