// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/235/problem/A
// status  : *editorial*
     
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

ll lcm(ll a, ll b)
{
    return (max(a,b)/gcd(a,b)) * min(a,b);
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;

    if(n == 1)
    {
        cout << 1 << NL;
        return;
    }
    else if(n == 2)
    {
        cout << 2 << NL;
        return;
    }
    else if(n == 3)
    {
        cout << 6 << NL;
        return;
    }
    else if( n == 4)
    {
        cout << 12 << NL;
        return;
    }

    if(n & 1)
    {
        cout << lcm(lcm(n,n - 1),n - 2) << NL;
    }
    else
    {
        // wrong 
        // cout << lcm(lcm(n - 1, n - 2), n - 3) << NL;

        ll mx = 1;
        for(ll i = max(2LL, n - 50); i <= n; i++)
        {
            for(ll j = max(2LL, n - 50); j <= n; j++)
            {
                for(ll k = max(2LL, n - 50); k <= n; k++)
                {
                    mx = max(mx, lcm(lcm(i,j),k));
                }
            }
        }
        cout << mx << NL;
    }
    return;
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