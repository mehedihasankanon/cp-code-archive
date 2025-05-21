// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc406/tasks/abc406_c
// AC
    
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
    vector<ll> v(n);
    vector<pair<ll,ll>> l, r; 
    ll st = 0, en = -1, inc = 1;
    cin >> v[0];
    forn(i,1,n)
    {
        cin >> v[i];
        if((v[i] > v[i - 1] && !inc) || (v[i] < v[i - 1] && inc))
        {
                en = i - 1;
                if(inc) l.push_back({st,en});
                else r.push_back({st,en});
                st = en;
                inc = 1 - inc;
        }
    }

    if(inc) l.push_back({st,n-1});
    else r.push_back({st,n-1});

    // for(auto [u,v] : l)
    // {
    //     cerr << u << " " << v << nl;
    // }
    // cerr << nl;
    // for(auto [u,v] : r)
    // {
    //     cerr << u << " " << v << nl;
    // }

    ll l1 = 0;
    if(l.size() == 0)
    {
        cout << 0 << nl;
        return;
    }
    ll l2 = 1;
    ll r1 = 0, r2 = 1;
    if(r.size() == 0)
    {
        cout << 0 << nl;
        return;
    }

    ll ans = 0;
    while(l1 < l.size() - 1)
    {
        ans += (l[l1].second - l[l1].first) * (l[l1 + 1].second - l[l1 + 1].first);
        l1++;
        r1++;
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