// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc193/tasks/abc193_c
// status  : AC

// using STLs in the proper place can be life-saving!!!
     
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

// #define mx 100010
// vector<bool> prime(mx,true);
// void sieve(void)
// {
//     for(ll i = 4; i <= mx; i += 2)
//     {
//         prime[i] = false;
//     }
//     for(ll i = 3; i <= mx; i += 2)
//     {
//         if(prime[i])
//         {
//             for(ll j = i; j <= mx; j += i)
//             {
//                 prime[j] = false;
//             }
//         }
//     }
//     return;
// }

void Pre(void)
{
    // sieve();
    
    
    return;
}   


ll n;
set<ll> s;

void f(ll a)
{
    ll x = a * a;
    while(x <= n) 
    {
        s.insert(x);
        x *= a;
    }

    return;
}
    
    
void Solve(ll test)
{
    cin >> n;
    ll i;
    for(i = 2; i*i <= n; i ++)
    {
        f(i);
        // if(prime[i]) ans += f(i,n) - 1; 
        // prime hok ba na hok, barti count er karone mara :)
        // so set is the savior here
        
        // dbg(i); dbg(f(i,n)); cerr << "----------" << NL;
    }
    cout << n - s.size() << NL;
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