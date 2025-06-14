// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/LightOJ-1007
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

const ll mx = 5e6;
vector<int> phi(mx + 5);
vector<long long> ans(mx + 10, 0);

void Pre(void)
{
    forn(i,1,mx + 1) phi[i] = i;

    for(ll i = 2; i <= mx; i++)
    {
        if(phi[i] == i)
        {
            for(ll j = i; j <= mx; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }

    forn(i,1,mx + 5)
    {
        ans[i] = ans[i - 1] + 1LL * phi[i] * phi[i];
    }


    
    return;
}   
    
    
void Solve(ll test)
{
    ll a, b; cin >> a >> b;
    printf("Case %lld: %lld\n", test, ans[b] - ans[a - 1]);
}   
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   