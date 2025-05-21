// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/474/problem/B
// status  : 
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
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
    
#define dbg(x)                  cout << #x << " " << x << "\n"
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
    unordered_map<ll,ll> grp;
    vector<ll> v;
    ll pos = 1, gr = 1;
    v.push_back(pos);
    grp[pos]=gr;
    forn(i,0,n)
    {
        ll x; cin >> x;
        pos += x;
        v.push_back(pos);
        gr++;
        grp[pos] = gr;
    }

    ll k; cin >> k;
    forn(i,0,k)
    {
        ll q; cin >> q;
            ll l = 0, r = (ll)v.size()-1, mid;
            while(r > l+1)
            {
                mid=(l+r)/2;
                if(v[mid] <= q) l = mid;
                else r = mid;
            }
            cout << grp[v[l]] << nl;
    
    }
    return;


}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    
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