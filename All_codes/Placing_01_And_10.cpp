// Bismillahir rahmanir rahim
    
// https://www.codechef.com/START178C/problems/PLACE0110
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
    
    
void Solve(ll test)
{
    ll a,b; cin >> a >> b;
    if(a == b)
    {
        cout << 2 * a << nl;
        return;
    }
    cout << max(a,b) * 2 - 1 << nl;
    return;
    // ll mn = min(a,b);
    // a -= mn; b -= mn;
    // ll ans = mn * 2;
    // if(a) ans += min(mn - 1,a), a -= min(mn - 1,a);
    // if(b) ans += min(mn - 1,b), b -= min(mn - 1,b);
    // dbg(a); dbg(b);
    // dbg(ans);
    // if(a) ans++, a--;
    // if(b) ans++, b--;
    // cout << ans + 2 * max(1LL,b) + 2 * max(1LL,a) - 2 - 2 << nl;
    // return; 
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