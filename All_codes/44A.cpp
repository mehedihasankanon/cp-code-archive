// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/44/problem/A
// status  : 
     
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
    struct data
    {
        string species; string color;
    };

    vector<data> v(n);
    forn(i,0,n) cin >> v[i].species >> v[i].color;
    sort(v.begin(),v.end(), [](const data& a, const data& b)
    {
        return (a.species < b.species or (a.species == b.species and  a.color < b.color));
    });

    ll cnt = 1;
    string curr_sp = v[0].species, curr_co = v[0].color;

    forn(i,1,n)
    {
        if(v[i].species != curr_sp or (v[i].species == curr_sp and v[i].color != curr_co))
        {
            cnt++;
            curr_sp = v[i].species;
            curr_co = v[i].color;
        }
    }

    cout << cnt << nl;
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