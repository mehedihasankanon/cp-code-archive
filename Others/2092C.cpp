// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2092/problem/C
// **editorial**
    
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
    // ll c0 = 0, c1 = 0;
    vector<ll> v(n);
    vector<vector<ll>> p(2);
    ll sum = 0;
    forn(i,0,n)
    {
        cin >> v[i];
        sum += v[i];
        // c0 += (v[i] % 2 == 0);
        // c1 += (v[i] % 2 == 1);
        p[v[i]%2].push_back(v[i]);
    }



    sort(v.begin(),v.end(),greater());
    sort(p[0].begin(),p[0].end());
    sort(p[1].begin(),p[1].end());

    if(p[0].size() == 0 || p[1].size() == 0)
    {
        cout << v.front() << nl;
        return;
    }


    // ll sum = accumulate(v.begin(),v.end(),0);

    cout << sum - p[1].size() + 1 << nl;
    return;

    // ll t = 1;
    // if(p[0].back() > p[1].back()) t = 0;

    // ll ans = p[t].back();
    // p[t].pop_back();

    // while(!p[0].empty() && !p[1].empty())
    // {
    //     ans += p[0].back() + p[1].back() - 1;
    //     p[0].pop_back(); p[1].pop_back();
    //     dbgc(p[0]);
    //     dbgc(p[1]);
    // }

    // if(t == 0)
    // {
    //     if(!p[1-t].empty()) ans += p[1-t].back();
    // }
    // else while(!p[1-t].empty()) 
    // {
    //     ans += p[1-t].back();
    //     p[1-t].pop_back();
    // }

    // cout << ans << nl;
    // // cerr << nl;
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