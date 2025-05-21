// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/1915/problem/F
// **editorial**
    
// #pragma GCC optimize("O1,O2,O3")
// #pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>



    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<ll, __gnu_pbds::null_type, less<ll>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
    
// #pragma GCC target("avx2")
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
    
    
bool comp(pair<ll,ll>a,pair<ll,ll> b)
{
    return a.second < b.second;
}

void Solve(ll test)
{
    ll n; cin >> n;
    vector<pair<ll,ll>> v(n);
    forn(i,0,n)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),comp);

    ordered_set ms;

    ll ans = 0;
    forn(i,0,n)
    {
        // vector<pair<ll,ll>> v1;
        // forn(j,i+1,n) v1.push_back(v[j]);
        // sort(v1.begin(),v1.end());

        // ll t = 0;
        // while(t < v1.size() && v1[t].first < v[i].first) t++;
        // ans += t;

        ans += ms.size() - ms.order_of_key(v[i].first);
        ms.insert(v[i].first);

    }

    cout << ans << nl;
    return;

}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   