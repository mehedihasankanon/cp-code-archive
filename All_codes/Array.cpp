// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/CodeForces-300A
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
    ll n; cin >> n;
    vector<ll> v1, v2, v3;
    forn(i,0,n)
    {
        ll x; cin >> x;
        if(x < 0)
        {
            v1.push_back(x);
        }
        else if(x)
        {
            v2.push_back(x);
        }
        else
        {
            v3.push_back(x);
        }
        // if(x < 0)
        // {
        //     if(v1.empty())
        //     {
        //         v1.push_back(x);
        //     }
        //     else
        //     {
        //         v2.push_back(x);
        //     }
        // }
        // else if(x)
        // {
        //     v2.push_back(x);
        // }
        // else
        // {
        //     v3.push_back(x);
        // }
    }

    if(v2.empty())
    {
        forn(i,0,2) 
        {
            v2.push_back(v1.back());
            v1.pop_back();
        }
    }

    if(v1.size() % 2 == 0)
    {
        v3.push_back(v1.back());
        v1.pop_back();
    }


    cout << v1.size() << " ";
    for(auto x : v1) cout << x << " ";
    cout << nl;
    cout << v2.size() << " ";
    for(auto x : v2) cout << x << " ";
    cout << nl;
    cout << v3.size() << " ";
    for(auto x : v3) cout << x << " ";
    cout << nl;

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