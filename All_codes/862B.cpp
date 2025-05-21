// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/862/problem/B
// AC
    
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

void dfs(ll node, vector<vector<ll>> &adj, string &col, const char ch)
{
    col[node] = ch;

    for(auto x : adj[node])
    {
        if(col[x] == 'x')
        {
            if(ch == 'r') dfs(x,adj,col,'b');
            else dfs(x,adj,col,'r');
        } 
    }
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<vector<ll>> adj(n+1);
    string col(n + 1,'x');

    forn(i,0,n-1)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // forn(i,1,n+1)
    // {
    //     dbgc(adj[i]);
    // }

    dfs(1,adj,col, 'r');

    // dbg(col);

    ll r = 0;
    forn(i,1,n+1) r += (col[i] == 'r');

    ll b = n - r;

    ll ans = 0;
    forn(i,1,n+1)
    {
        if(col[i] == 'b') ans += r - adj[i].size();
        else ans += b - adj[i].size();
    }

    cout << ans/2 << nl;
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