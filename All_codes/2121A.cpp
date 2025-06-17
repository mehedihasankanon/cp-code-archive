// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2121/problem/A
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

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, k; cin >> n >> k;
    vector<ll> v(n);

    forn(i,0,n) cin >> v[i];
    sort(v.begin(), v.end());

    if(v.size() == 1)
    {
        cout << abs(k - v[0]) << nl;
        return;
    }
    else if(k >= v.front() && k <= v.back())
    {
        cout << min(v.back() - k + (v.back() - v.front()), k - v.front()+ (v.back() - v.front())) << nl;
        return;
    }
    else if( k < v.front())
    {
        cout << v.back() - k << nl;
        return;
    }

    cout <<  k - v.front() << nl;
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