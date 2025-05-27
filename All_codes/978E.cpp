// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/978/problem/E
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
    ll n, k; cin >> n >> k;
    ll mn = 1e15, tmp = 0, mx = -1e15;

    vector<ll> v(n);
    forn(i,0,n)
    {
        cin >> v[i];
        tmp += v[i];
        mn = min(mn,tmp);
        mx = max(mx, tmp);
        if(tmp > k)
        {
            cout << 0 << nl;
            return;
        }
    }


    ll lwr_bnd = max(0LL,-mn);
    ll upr_bnd = min(k, k - mx);

    if(lwr_bnd > upr_bnd)
    {
        cout << 0 << nl;
        return;
    }
    cout << upr_bnd - lwr_bnd + 1 << nl;

    // ll minn = max(0LL,-mn);
    // if(mx > k)
    // {
    //     cout << 0 << nl;
    //     return;
    // }
    // cout << min(k + 1 - minn, k + 1 - mx) << nl;
    // return;

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