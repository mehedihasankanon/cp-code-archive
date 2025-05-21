// https://codeforces.com/contest/2069/problem/0
// ac
     
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
    
#define DEBUG
    
#ifdef DEBUG
#define debug(n) cout<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define debugc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<el<<" ";}cout<<']'<<endl;
#define debugcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cout<<']'<<endl;
#else
#define debug(n) // single variable, string
#define debugc(a) // vector, deque, array
#define debugcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> b(n - 2), a(n, -1);

    forn(i,0,n - 2) cin >> b[i];

    forn(i,2,n - 2)
    {
        if(b[i - 2] == 1 && b[i - 1] == 0 && b[i ] == 1)
        {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
    return;

    // forn(i,1,n - 1) cin >> b[i];
    // a[0] = 1;
    // forn(i,1,n-1)
    // {
    //     if(b[i])
    //     {
    //         if(i > 1)
    //         {
    //             if(a[i] != a[i - 1])
    //             {
    //                 debugc(a);
    //                 cout << "NO" << nl;
    //                 return;
    //             }
    //         }
    //         a[i] = a[i - 1];
    //         a[i + 1] = a[i];
    //     }
    //     else
    //     {
    //         if(!a[i]) a[i] = a[i - 1] + 1;
    //         a[i + 1] = a[i];
    //     }
    // }
    // debugc(a);
    // cout << "YES" << nl;
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