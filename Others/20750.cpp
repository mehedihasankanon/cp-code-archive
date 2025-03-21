// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2075/problem/0
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
    ll n, k; cin >> n >> k;
    
    ll ans = 0;
    if(n & 1)
    {
        if(k & 1)
        {
            ll ans = 1;
            n -= k;
            if(n > 0)
            {
                ll d = k - 1;
                ans += n / d;
                cout << ans + (n % d != 0) << nl;
                return;
            }
            cout << ans << nl;
            return;
        }
        else
        {
            ll ans = 1;
            n -= k - 1;
            if(k > 0)
            {
                ll d = k;
                ans += n / d;
                cout << ans + (n % d != 0) << nl;
                return;
            }
            cout << ans << nl;
            return;
        }
    }
    else
    {
        if((k & 1))
        {
            ll ans = 1;
            n -= k - 1;
            if(n > 0)
            {
                ll d = k - 1;
                ans += n / d;
                cout << ans + (n % d != 0) << nl;
                return;
            }
            cout << ans << nl;
            return;
        }
        else
        {
            ll ans = 1;
            n -= k;
            if(k > 0)
            {
                ll d = k - 1;
                ans += n / d;
                cout << ans + (n % d != 0) << nl;
                return;
            }
            cout << ans << nl;
            return;
        }

    }
    
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