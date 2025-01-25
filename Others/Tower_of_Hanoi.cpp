// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/CSES-2165
// status  : ac
     
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

ll pwr(ll a, ll b)
{
    ll ans = 1; while(b--) ans*=a; 
    return ans;
}


ll t1 = 1, t2 = 2, t3 = 3;

void toh(ll n, ll t1, ll t2, ll t3)
{
    if(n==1)
    {
        cout << t1 << " " << t3 << nl;
        return;
    }

    toh(n-1, t1, t3, t2);
    cout << t1 << " " << t3 << nl;
    toh(n-1, t2, t1, t3);
    return;
}
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    cout << pwr(2,n) -1 << nl;
    toh(n, t1, t2, t3);
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