// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/gym/307122/problem/D
// status  : 
     
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
    
    
void Solve(ll test)
{
    ll n, k ,s; cin >> n >> k >> s;

    if(s < k || s > k*(n-1)) 
    {
        cout << "NO" << NL;
        return;
    }
    else
    {
        cout << "YES" << NL;
        
        // forn(i,0,s/(n - 1))
        // {
        //     // cout << 1 << " " << n << " ";
        //     if(i & 1) cout << 1 << " ";
        //     else cout<< n << " ";
        // }
        // if(s % (n - 1) != 0)
        // {
            // if(1 & (s / (n - 1)))
            // {
            //     // cout << n << " " << n - s % (n - 1) << NL;
            //     cout << n - s % (n - 1) << NL;
            //     return;
            // }
            // else
            // {
            //     // cout << 1 << " " << s % (n - 1) << NL;
            //     cout << s % (n - 1) << NL;
            //     return;
            // }
        // }
        // forn(i,0,s % (n - 1))
        // {

        // }


        // if(s/k > 0) forn(i,0,k-1)
        // {
        //     if(i & 1) cout << 1 << " ";
        //     else cout << s / k + 1 << " ";
        // }

        // if(k & 1)
        // {
        //     cout << s - (k - 1) * (s/k) << NL;
        //     return;
        // }
        // else
        // {
        //     cout << s/k - (s - (k - 1) * (s/k)) << NL;
        //     return;
        // }



        




        cout << NL;
        return;
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