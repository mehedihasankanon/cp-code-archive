// Bismillahir rahmanir rahim
    
// 
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
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

bool check(map<ll,ll>& mp)
{
    return (mp[0] <= 0) && (mp[1] <= 0) && (mp[2] <= 0) && (mp[3] <= 0) && (mp[5] <= 0) ; 
}
    
    
void Solve(ll test)
{
    map<ll,ll> mp;
    // 01.03.2025
    mp[0] = 3;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 1;
    mp[5] = 1;

    ll n; cin >> n; bool fl = false; ll ans = -1;
    forn(i,1,n+1)
    {
        ll x; cin >> x;
        mp[x]--;
        if(check(mp) && !fl)
        {
            ans = i;
            fl = true;
        }
    }
    if(fl) cout << ans << nl;
    else cout << 0 << nl;
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