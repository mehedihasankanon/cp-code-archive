// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/1272/problem/E
// editorial
    
#pragma GCC optimize("O3,unroll-loops")
    
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
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> v(n), ans(n,-1), even, odd;
    forn(i,0,n)
    {
        cin >> v[i];
        if(v[i] % 2) odd.push_back(i);
        else even.push_back(i);
    }

    vector<vector<ll>> adj(n);
    forn(i,0,n)
    {
        ll l = i - v[i], r = i + v[i];
        
        if(l >= 0) adj[l].push_back(i);
        if(r < n) adj[r].push_back(i);
    }

    vector<ll> d(n,mod);
    queue<ll> q; 
    for(auto x : even) {q.push(x); d[x] = 0;}
    while(!q.empty())
    {
        ll t = q.front(); q.pop();
        for(auto x : adj[t])
        {
            if(d[x] == mod)
            {
                d[x] = d[t] + 1;
                q.push(x);
            }
        }
    }
    for(auto x : odd)
    {
        if(d[x] != mod) ans[x] = d[x];
    }

    d.clear();
    d.resize(n,mod);
    for(auto x : odd) {q.push(x); d[x] = 0;}
    while(!q.empty())
    {
        ll t = q.front(); q.pop();
        for(auto x : adj[t])
        {
            if(d[x] == mod)
            {
                d[x] = d[t] + 1;
                q.push(x);
            }
        }
    }
    for(auto x : even)
    {
        if(d[x] != mod) ans[x] = d[x];
    }


    for(auto t : ans) cout << t << " ";
    cout << nl;
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