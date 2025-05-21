// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1183/problem/D
// status  : AC
     
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
    
}   


bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.second < b.second;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    map<ll,ll> mp;

    forn(i,0,n) 
    {
        ll x; cin >> x; mp[x]++;
    }

    vector<pair<ll,ll>> a(mp.size());
    // dbg(mp.size());

    ll i = 0;
    for(auto [u,v] : mp) 
    {
        a[i].first = u; a[i].second = v;
        i++;
    }
    // mp.clear();

    sort(a.begin(),a.end(),comp);

    ll ans = a.back().second, last = a.back().second - 1;
    a.pop_back();
    while(!a.empty())
    {
        // dbg(a.back().first); dbg(a.back().second);
        if(last >= a.back().second) 
        {
            ans += a.back().second;
            last = a.back().second - 1;
        }
        else if(last > 0)
        {
            ans += last;
            last--;
        }
        if(last == 0) break;
        a.pop_back();
    }
    a.clear();

    cout << ans << NL;
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
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   