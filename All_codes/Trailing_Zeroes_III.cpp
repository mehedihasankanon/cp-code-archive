// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/LightOJ-1138
// AC
    
#pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("avx2")
    
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

map<ll,ll> mp;

ll mx(ll b, ll t)
{
    ll ans = 0, t1 = t;
    while(b / t1)
    {
        ans += b /t1;
        t1 *= t; 
    }
    return ans;
}

void Pre(void)
{
    // forn(i,1,100000002)
    // {
    //     ll t = mx(i,5);
    //     if(!mp[t]) mp[t] = i;
    // }
    return;
}   
    
    
void Solve(ll test)
{

    ll n; cin >> n;

    cout << "Case " << test << ": ";

    // ll l = 1, r = 4e18 + 5;
    ll l = 1, r = 5 * n + 100;

    while(r - l > 1)
    {
        ll mid = l + (r - l) / 2;
        if(mx(mid,5) >= n) r = mid;
        else l = mid;
    }

    if(mx(r,5) != n) cout << "impossible\n";
    else cout << r << nl;
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