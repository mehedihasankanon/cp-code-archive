// Bismillahir rahmanir rahim

// https://vjudge.net/problem/SPOJ-BUGLIFE
// ac

// #pragma GCC optimize("O1,O2,O3")
// #pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

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

void Pre(void)
{

    return;
}


bool dfs(ll node, vector<vector<ll>>& adj, vector<char> &col, vector<bool> &vis, char ch)
{
    vis[node] = 1;
    col[node] = ch;

    bool fl = true;
    for(auto x : adj[node])
    {
        if(!vis[x])
        {
            if(ch == 'r') 
            { 
                if(!dfs(x,adj,col,vis,'b')) return false;
            }
            else if(!dfs(x,adj,col,vis,'r')) return false;
        }
        else
        {
            if(col[x] == ch) return false;
        }
    }
    return fl;
}
void Solve(ll test)
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> adj(n + 1);
    forn(i, 0, k)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<char> col(n + 1, 'x');
    vector<bool> vis(n + 1, 0);
    forn(i, 1, n+1)
    {
        if(!vis[i])
        {
            if(!dfs(i,adj,col,vis,'r'))
            {
                cout << "Scenario #" << test << ":\nSuspicious bugs found!\n";
                return;
            }
        }
    }
    cout << "Scenario #" << test << ":\nNo suspicious bugs found!\n";

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
        Solve(test);
    }
    return 0;
}