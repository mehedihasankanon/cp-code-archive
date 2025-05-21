// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1641
// status  : WA, Ac
     
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
    ll n, s; cin >> n >> s;



    // ***WRONG***
    // vll v; map<ll,vll> mp;

    // forn(i,0,n)
    // {
    //     ll x; cin >> x;
    //     mp[x].push_back(i+1);
    //     if(mp[x].size() == 1) v.push_back(x);
    // }
    // sort(all(v));

    // ll sz = v.size();
    // forn(i,0,sz)
    // {
    //     ll s1 = s-v[i];
    //     ll pos1 = mp[v[i]].back();
    //     mp[v[i]].pop_back();
    //     ll l = 0, r = sz-1;
    //     while(l < r)
    //     {
    //         if(((v[l]>>1) == s1 and mp[v[l]].size() >= 2))
    //         {
    //             cout << pos1 << " " << *mp[v[l]].begin() << " " << *(mp[v[l]].begin()+1) << nl;
    //             return;
    //         }
    //         else if ((v[r]>>1) == s1 and mp[v[r]].size() >= 2)
    //         {
    //             cout << pos1 << " " << *mp[v[r]].begin() << " " << *(mp[v[r]].begin()+1) << nl;
    //             return;
    //         }
    //         else 
    //         {
    //             if(mp[v[l]].empty()) l++;
    //             else if(mp[v[r]].empty()) r--;

    //             if(l != r)
    //             {
    //                 if(v[l]+v[r] < s1) l++;
    //                 else if(v[l]+v[r] > s1) r--;
    //             }
    //             else if(l != r and v[l]+v[r]==s1)
    //                 {
    //                     cout << mp[v[l]].back() << " " << mp[v[r]].back() << " " << pos1 << nl;
    //                     return; 
    //                 }
    //         }
    //     }
    //     mp[v[i]].push_back(pos1);
    // }


    vector<pll> v(n);
    forn(i,0,n) {cin >> v[i].first;v[i].second = i+1;}

    sort(all(v));

    forn(i,0,n-1)
    {
        ll s1 = s-v[i].first;
        ll l = 0, r = n-1;
        while(l < r)    
        {
            if(l == i) {l++; continue;}
            else if(r == i) {r--; continue;};
            if(v[l].first + v[r].first < s1) l++;
            else if(v[l].first+v[r].first > s1) r--;
            else 
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << nl;
                return;
            }
        }
    }



    cout << "IMPOSSIBLE" << nl;
    return;





}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   