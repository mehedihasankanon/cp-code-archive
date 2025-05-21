// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/242/problem/C
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
using namespace std;
    
// using ll = long long;
using ll = int;
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
    ll x0,y0,x1,y1; cin >> x0 >> y0 >> x1 >> y1;
    ll n; cin >> n;
    map<pair<ll,ll>,bool> mp;
    mp[{x0,y0}] = 1;
    mp[{x1,y1}] = 1;
    forn(i,0,n)
    {
        ll r, a, b; cin >> r >> a >> b;
        forn(i,a,b+1) mp[{r,i}] = 1;
    }

    map<pair<ll,ll>,pair<ll,ll>> prev;
    map<pair<ll,ll>,bool> vis;

    queue<pair<ll,ll>> q;
    q.push({x0,y0});
    vis[{x0,y0}] = 1;

    while(!q.empty())
    {
        pair<ll,ll> p = q.front(); q.pop();

        if(p.first == x1 && p.second == y1)
        {
            break;
        }

        if(p.first && mp[{p.first - 1,p.second}] && !vis[{p.first - 1,p.second}]) {
            q.push({p.first - 1,p.second});
            prev[{p.first - 1,p.second}] = p;
            vis[{p.first - 1,p.second}] = 1;
        }

        if(p.second && mp[{p.first,p.second - 1}] && !vis[{p.first,p.second - 1}]) {
            q.push({p.first,p.second - 1});
            prev[{p.first,p.second - 1}] = p;
            vis[{p.first,p.second - 1}] = 1;
        }

        if(mp[{p.first - 1,p.second - 1}] && !vis[{p.first - 1,p.second - 1}])
        {
            q.push({p.first - 1,p.second - 1});
            prev[{p.first - 1,p.second - 1}] = p;
            vis[{p.first - 1,p.second - 1}] = 1;
        }

        if(mp[{p.first + 1,p.second + 1}] && !vis[{p.first + 1,p.second + 1}])
        {
            q.push({p.first + 1,p.second + 1});
            prev[{p.first + 1,p.second + 1}] = p;
            vis[{p.first + 1,p.second + 1}] = 1;
        }

        if(mp[{p.first - 1,p.second + 1}] && !vis[{p.first - 1,p.second + 1}])
        {
            q.push({p.first - 1,p.second + 1});
            prev[{p.first - 1,p.second + 1}] = p;
            vis[{p.first - 1,p.second + 1}] = 1;
        }

        if(mp[{p.first + 1,p.second - 1}] && !vis[{p.first + 1,p.second - 1}])
        {
            q.push({p.first + 1,p.second - 1});
            prev[{p.first + 1,p.second - 1}] = p;
            vis[{p.first + 1,p.second - 1}] = 1;
        }

        if(mp[{p.first + 1,p.second}] && !vis[{p.first + 1,p.second}])
        {
            q.push({p.first + 1,p.second});
            prev[{p.first + 1,p.second}] = p;
            vis[{p.first + 1,p.second}] = 1;
        }

        if(mp[{p.first ,p.second+ 1}] && !vis[{p.first ,p.second+ 1 }])
        {
            q.push({p.first ,p.second+ 1 });
            prev[{p.first ,p.second + 1}] = p;
            vis[{p.first,p.second + 1 }] = 1;
        }


        
    }

    ll ans = 0;
    // for(auto [u,v] : vis)
    // {
    //     cout << u.first << " " << u.second << " " <<  v << nl;
    //     // cout << u << " " << v << nl;
    // }
    if(!vis[{x1,y1}])
    {
        cout << -1 << nl;
        return;
    }

    pair<ll,ll> t = {x1,y1};
    while(t.first != x0 || t.second != y0)
    {
        // cerr << t.first << " " << t.second << nl;
        ans ++;
        t = prev[t];
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