// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc395/tasks/abc395_c
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
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
    map<ll,vector<ll>> mp;

    ll n; cin >> n;
    ll ans = mod;
    forn(i,1,n+1)
    {
        ll x; cin >> x;
        mp[x].push_back(i);

        if(mp[x].size() > 1)
        {
            // dbgc(mp[x]);
            ans = min(mp[x][mp[x].size() - 1] - mp[x][mp[x].size() - 2] + 1, ans);
        }
    }

    if(ans == mod)
    {
        cout << -1 << nl;
        return;
    }
    cout << ans << nl;
    return;

    // vector<ll> ans;
    // for(auto [u,v] : mp)
    // {
    //     if(v.size() > 1)
    //     {
    //         ll mn = v[1] - v[0];
    //         forn(i,2,v.size())
    //         {

    //         }
    //     }
    // }
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