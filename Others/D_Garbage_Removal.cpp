// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc406/tasks/abc406_d
// **editorial**
    
#pragma GCC optimize("O3,unroll-loops")
    
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
    ll h, w, n; cin >> h >> w >> n;
    map<ll,vector<ll>> tx, ty;

    forn(i,0,n)
    {
        ll x, y; cin >> x >> y;
        tx[x].push_back(i);
        ty[y].push_back(i);
    }

    vector<bool> vis(n,0); map<ll,bool> testedx, testedy;

    ll q; cin >> q;
    forn(i,0,q)
    {
        ll t, u; cin >> t >> u;
        if(t == 1)
        {
            if(testedx[u]) 
            {
                cout << 0 << nl;
                continue;
            }
            testedx[u] = 1;
            ll t = 0;
            for(auto trash : tx[u])
            {
                if(!vis[trash])
                {
                    vis[trash] = 1;
                    t++;
                }
            }

            cout << t << nl;
        }
        else
        {
            if(testedy[u]) 
            {
                cout << 0 << nl;
                continue;
            }
            testedy[u] = 1;
            ll t = 0;
            for(auto trash : ty[u])
            {
                if(!vis[trash])
                {
                    vis[trash] = 1;
                    t++;
                }
            }

            cout << t << nl;
        }
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