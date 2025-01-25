// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/295/problem/A
// status  : AC *yeay*
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
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
    ll n, m ,k; cin >> n >>m >> k;
    vector<ll> v(n), pref(n + 2,0);
    vector<pair<pair<ll,ll>,ll>> ops(m);
    
    forn(i,0,n) cin >> v[i];

    forn(i,0,m)
    {
        ll x, y, d;
        cin >> x >> y >> d;
        
        pair<ll,ll> p1 = {x,y};
        ops[i] = make_pair(make_pair(x,y),d);

         
        // ops[{x,y}] = d;

        // pref[x] += d; pref[y + 1] -= d;

    }

    vector<ll> op_n(m), op_pref(m+2);
    forn(i,0,k)
    {
        ll x, y; cin >> x >> y;
        op_pref[x]++; op_pref[y+1]--;
    }
    ll cnt = 0;
    forn(i,1,m+1)
    {
        cnt += op_pref[i];
        op_n[i - 1] = cnt;
    }

    forn(i,0,m)
    {
        // op_n[i] -> number of ops of operation i
        // ops[i] -> 
        pref[ops[i].first.first] += op_n[i] * ops[i].second;
        pref[ops[i].first.second + 1] -= op_n[i] * ops[i].second;
    }

    cnt = 0;
    forn(i,1,n + 1)
    {
        cnt += pref[i];
        v[i - 1] += cnt;
    }

    forn(i,0,n) cout << v[i] << " ";

    return;




    // ALL OF THESE BELOW ARE WRONG BECAUSE I READ THE QUESTION WRONG AAAAAAAAA





    // vector<ll> adder(n,0);
    // ll add = 0;
    // forn(i,1,n+1)
    // {
    //     add += pref[i];
    //     adder[i - 1] = add; 
    // }

    // vector<ll> ops(n + 2);
    // forn(i,0,k)
    // {
    //     ll x, y; cin >> x >> y;
    //     ops[x]++; ops[y+1]--;
    // }

    // ll cnt = 0;
    // forn(i,0,n)
    // {
    //     cnt += ops[i + 1];
    //     v[i] += cnt * adder[i];
    // }

    // forn(i,0,n) cout << v[i] << " ";
    // cout << NL;
    // return;


    // forn(i,0,k)
    // {
    //     ll x, y; cin >> x >> y;
    //     ll t = ops[{x,y}];
    //     // dbg(ops[{x,y}]);
    //     dbg(t);

    //     pref[x] += t; pref[y+1] -= t;
    // }

    // forn(i,0,m + 2) cerr << pref[i] << " ";

    // ll add = pref[0];
    // forn(i,1,n + 1)
    // {
    //     add += pref[i];
    //     v[i - 1] += add;
    // }

    // forn(i,0,n)
    // {
    //     cout << v[i] << " ";
    // }
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