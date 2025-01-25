// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc248/tasks/abc248_d
// status  : ***editorial***
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;


    // wrong for some reason :(
    // vector<vector<ll>> v(200005, vector<ll>(200005,0));
    // // v[0].resize(n+1,0);

    // forn(i,1,n+1)
    // {
    //     v[i] = v[i - 1];
    //     // forn(j,0,n+1) cerr << v[i][j] << " ";
    //     // cerr << NL; 

    //     ll x; cin >> x; v[i][x]++;
    // }

    // ll k; cin >> k;
    // forn(i,0,k)
    // {
    //     ll q, l, r; cin >> l >> r >> q;


    //     // for(auto x : v[q]) dbg(x);
    //     // // dbg(x);
    //     // cerr << "------" << NL;
    //     cout << v[r][q] - v[l - 1][q] << NL;
    // }



    vector<vector<ll>> v(n+1);

    forn(i,1,n+1)
    {
        ll x; cin >> x; v[x].push_back(i);
    }

    ll k; cin >> k;
    forn(i,0,k)
    {
        ll l,r, q; cin >> l >> r >> q;
        cout << upper_bound(v[q].begin(), v[q].end(), r) - lower_bound(v[q].begin(), v[q].end(), l)<< NL; 
    }
    return;


}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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