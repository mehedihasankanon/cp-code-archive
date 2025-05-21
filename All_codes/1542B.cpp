// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1542/problem/B
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

bool f(ll n, ll a ,ll b)
{

    // ok this is TLE. expected that
    // cerr << n << NL;
    if(n == 1) return true;

    if(n > a)
    {
        if(n % b == 0) return f(n - a, a, b) || f(n/b,a,b);
        else return f(n - a,a,b);
    }
    else
    {
        if(n % b == 0) return f(n / b,a,b);
    }
    return false;



    // if(n <= a) return false;
    // else
    // {
    //     if(n % b == 0) return f(n - a, a, b) || f(n/b, a, b);
    //     else return f(n - a, a, b);
    // }

    // if(n % b == 0)
    // {
    //     if(n > a) return f(n - a, a, b) || f(n/b, a , b);
    //     else return f(n/b,a,b);
    // }

    // return false;
}

bool chk(ll n, ll a)
{
    ll t  = n;
    while(t % a == 0) t = t / a;
    // if(t == 1) return true;
    // else return false;
    return (t == 1);
}

bool chk2(ll n, ll a, ll b, ll t)
{
    if(t > n) return false;
    return ((n - t) % b == 0) || chk2(n, a, b, t * a);
}
    
    
void Solve(ll test)
{
    ll a, b , n; cin >> n >> a >> b;
    // if(f(n,a,b)) cout << "Yes" << NL;
    // else cout << "No" << NL;
    // cerr << "---------" << NL;

    if(b == 1)
    {
        cout << "Yes" << NL;
        return;
    }

    if(a == 1)
    {
        if(b == 1)
        {
            cout << "Yes" << NL;
            return;
        }
        if(n % b == 1)
        {
            cout << "Yes" << NL;
        }
        else 
        {
            cout << "No" << NL;
        }
        return;
    }

// wrong ==============
    //     while(n % a == 0) n /= a;
    //     // if(b == )
    //     // n %= b;
    //     if(n % b == 1)
    //     {
    //         cout << "Yes" << NL;
    //         return;
    //     }
    //     else
    //     {
    //         if(chk2(n,a,b, a))
    //         {
    //             cout << "Yes" << NL;
    //             return;
    //         }
    //         cout << "No" << NL;
    //         return;
    //     }
    // cout << "No" << NL;
// =================

    ll t = 1;
    while(t <= n)
    {
        if(t % b == n % b)
        {
            cout << "Yes" << NL;
            return;
        }
        t *= a;
    }
    cout << "No" << NL;
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