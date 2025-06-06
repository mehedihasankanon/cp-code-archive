// Bismillahir rahmanir rahim
    
// https://vjudge.net/contest/719474#problem/B
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

const ll T = 2e5 + 10;

vector<bool> prime(T,1);
void Pre(void)
{
    for(ll i = 4; i < T; i+=2 ) prime[i] = 0;
    for(ll i = 3; i < T; i+=2)
    {
        if(prime[i]) for(ll j = i * i; j < T; j += i) prime[j] = false;
    }
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    if(n == 1)
    {
        cout << 1 << nl << 1;
        return;
    }
    else if(n == 2)
    {
        cout << 1 << nl << "1 1 " << nl;
        return;
    }
    cout << 2 << nl;
    forn(i,2,n+2)
    {
        if(prime[i]) cout << 1 << " ";
        else cout << 2 << " ";
    }
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