// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2114/problem/D
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
    vector<pair<ll,ll>> v(n);
    multiset<ll> sx, sy;

    forn(i,0,n)
    {
        cin >> v[i].first >> v[i].second;
        sx.insert(v[i].first);
        sy.insert(v[i].second);
    }

    if(n < 3)
    {
        cout << n << nl;
        return; 
    }

    dbgc(sx); dbgc(sy);

    ll ans = 2e18;

    forn(i,0,n)
    {
        sx.erase(sx.find(v[i].first));
        sy.erase(sy.find(v[i].second));

        ll left = *sx.begin(), right = *sx.rbegin(), up = *sy.rbegin(), down = *sy.begin();
        ll area = (right - left + 1) * (up - down + 1);

        dbg(area);

        if(area > n - 1)
        {
            ans = min(ans, area);
        }
        else
        {
            ans = min(ans, area + min((right - left + 1) , (up - down + 1)));
        }

        sx.insert(v[i].first);
        sy.insert(v[i].second);
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