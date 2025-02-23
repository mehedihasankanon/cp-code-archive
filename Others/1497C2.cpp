// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1497/problem/C2
// status  : **editorial**
     
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
    
    
void Solve(ll test)
{
    ll n, k; cin >> n >> k;
    // ll t = n/2, cs = 1;
    // vector<ll> v(k,1);
    // n -= k;
    // if(n & 1) 
    // {
    //     v.back()++; cs++; n--;
    // }

    // ll idx = 0;
    // while(n > 0)
    // {
    //     if(idx >= n) break;
    //     if(cs == 1)
    //     {
    //         if(idx == n - 1)
    //         {
    //             v[idx] += 2;
    //             n -= 2;
    //         }
    //         else
    //         {
    //             if(v[idx] == t) idx += 2;
    //             else
    //             {
    //                 // v[idx]+=2; v[idx+1]++;
    //                 // n -= 2;
    //                 if(n >= 4)
    //                 {
    //                     if(v[idx] & 1) 
    //                     {
    //                         v[idx]++; v[idx + 1]++;
    //                         n -= 2;
    //                     }
    //                     else
    //                     {
    //                         if(v[idx] <= t - 1)
    //                         {
    //                             v[idx]+=2; v[idx + 1] += 2;
    //                             n -= 4;
    //                         }
    //                         else
    //                         {
    //                             idx += 2;
    //                         }
    //                     }
    //                 }
    //                 else
    //                 {
    //                     if(v[idx] & 1)
    //                     {
    //                         v[idx]++; v[idx + 1]++;
    //                         n -= 4;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }



    // cout << NL;


    // vector<ll> v(k - 3, 1);
    forn(i,0,k-3) cout << 1 << " ";
    ll t = n - k + 3;
    // n -= k - 3;
    if(t&1)
    {
        cout << 1 << " " << t/2 << " " << t/2 << NL;
        return;
    }
    if(t % 4 != 0)
    {
        cout << 2 << " " << t/2 - 1 << " " << t/2 - 1 << NL;
        return;
    }
    else
    {
        cout << t/2 << " " << t/4 << " " << t/4 << NL;
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
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   