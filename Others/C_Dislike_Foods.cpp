// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc402/tasks/abc402_c
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
    ll n, m; cin >> n >> m;
    vector<vector<ll>> k(m+1);

    forn(i,1,m+1)
    {
        ll sz; cin >> sz;
        forn(j,0,sz) 
        {
            ll x; cin >> x;
            k[i].push_back(x);
        }
    }

    map<ll,ll> mp;
    forn(i,1,n+1)
    {
        ll x; cin >> x;
        mp[x] = i;
    }

    vector<ll> ans(n+1,0);
    forn(i,1,m+1)
    {
        for(auto& x : k[i]) x = mp[x];
        sort(k[i].begin(),k[i].end());
        ans[k[i].back()]++;
        // dbgc(k[i]);
    }

    ll curr = 0;
    forn(i,1,n+1)
    {
        curr += ans[i];
        cout << curr << nl;
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