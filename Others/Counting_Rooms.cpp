// Bismillahir rahmanir rahim
    
// https://cses.fi/problemset/task/1192
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
using namespace std;
    
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

ll col = 1;

void dfs(ll i, ll j, vector<vector<bool>> &vis, vector<string> &v, vector<vector<ll>> &cl)
{
    if(v[i][j] == '#') return;

    vis[i][j] = 1;
    cl[i][j] = col;

    if(i && !vis[i - 1][j]) dfs(i - 1, j, vis, v, cl);
    if(j && !vis[i][j - 1]) dfs(i, j - 1, vis,v, cl);
    if(i < v.size() - 1 && !vis[i + 1][j]) dfs(i + 1, j, vis, v, cl);
    if(j < v.front().size() - 1 && !vis[i][j + 1]) dfs(i, j+1,vis,v,cl);

    return;
}
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    vector<string> v(n);

    forn(i,0,n) cin >> v[i];

    vector<vector<bool>> vis(n,vector<bool>(m,0));
    vector<vector<ll>> cl(n,vector<ll>(m,0));

    ll room = 0;
    forn(i,0,n)
    {
        forn(j,0,m)
        {
            if(v[i][j] != '#' && !vis[i][j]) dfs(i,j,vis,v,cl), room++, col++;
        }
    }

    // forn(i,0,n)
    // {
    //     forn(j,0,m) cout << cl[i][j] << " ";
    //     cout << nl;
    // }

    cout << room << nl;
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