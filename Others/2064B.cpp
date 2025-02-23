// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2064/problem/B
// status  : ac
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   

bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.second - a.first > b.second - b.first;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    map<ll,vector<ll>> mp;
    vector<ll> v(n); forn(i,0,n) cin >> v[i], mp[v[i]].push_back(i);
    if(n == 1)
    {
        cout << 1 << " " << 1 << nl;
        return;
    }


    for(auto [x,y] : mp)
    {
        if(y.size() == 1)
        {
            v[y[0]] = -1;
            // dbg(v[y[0]]);
        }
    }

    // forn(i,0,n) cerr << v[i] << " ";
    // cerr << nl;

    ll lo = -1, hi = -1, len = 0, cont = 0;
    vector<pair<ll,ll>> ans;
    forn(i,0,n)
    {
        if(v[i] == -1)
        {
            if(!cont) 
            {
                cont = 1;
                lo = i;
            }
        }
        else
        {
            if(cont)
            {
                hi = i - 1;
                cont = 0;
                ans.push_back({lo + 1,hi + 1});
            }
        }
    }

    if(cont)
    {
        ans.push_back({lo + 1,n});
    }

    if(ans.size() == 0)
    {
        cout << 0 << nl;
        return;
    }
    sort(ans.begin(), ans.end(),comp);
    cout << ans[0].first << " " << ans[0].second << nl;
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