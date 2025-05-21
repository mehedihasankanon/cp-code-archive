// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/520/problem/B
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
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    vector<bool> vis(1e4 + 10, 0);
    vector<ll> prev(1e4 + 10, 0);

    ll mx = 10005;

    queue<ll> q;
    q.push(n);
    vis[n] = 1;
    while(!q.empty())
    {
        ll cur = q.front(); q.pop();

        if(cur * 2 == m)
        {
            vis[m] = 1;
            prev[m] = cur;
            break;
        }
        else if(cur * 2 < mx)
        {
            if(!vis[cur * 2]) {
                q.push(cur * 2);
                vis[cur * 2] = 1;
                prev[cur * 2] = cur;
            }
        }

        if(cur - 1 > 0) 
        {
            if(cur - 1 == m)
            {
                vis[m] = 1; 
                prev[m] = cur;
                break;
            } 
            else if(!vis[cur - 1])
            {
                q.push(cur - 1);
                vis[cur  - 1] = 1;
                prev[cur - 1] = cur;
            }
        }

    }

    if(vis[m])
    {
        vector<ll> ans;
        ans.push_back(m);
        while(ans.back() != n)
        {
            ans.push_back(prev[ans.back()]);
        }

        cout << ans.size() - 1 << nl;
        return;
    }


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