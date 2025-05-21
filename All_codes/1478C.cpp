// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1478/problem/C
// status  : AC Alhamdulillah!
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cerr << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    vll v;
    map<ll,ll> mp;
    bool odd = false, fl = true;
    forn(i,0,2*n)
    {
        // cin >> v[i];
        ll x; cin >> x;
        if(1&x or x == 0) odd = true;
        else {if(mp[x]==0) {v.push_back(x);} mp[x]++; if(mp[x] > 2) fl = false;}
    }
    if(odd or !fl)
    {
        cout << "NO\n";
        return;
    }

    for(auto [u,v] : mp) if(v ==1 or v > 2) 
    {
        cout << "NO\n";
        return;
    }
    




    sort(all(v));
    ll minus = 0;
    // dbg(v.size());
    while(!v.empty())
    {
        if((v.back()-minus <= 0) or (v.back()-minus)%(2*v.size()) != 0)
        {
            cout << "NO\n";
            return;
        }
        ll elem = (v.back()-minus)/(2*v.size());
        // dbg(elem);
        minus += 2*elem;
        v.pop_back();
    }

    cout << "YES\n";
    return;


    
    
    return;
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   