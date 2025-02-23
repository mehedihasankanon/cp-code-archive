// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1418/problem/C
// status  : ***editorial***
     
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
    ll n; scanf("%lld", &n);
    ll dp[n][2];

    ll a[n]; forn(i,0,n) scanf("%lld", &a[i]);

    dp[0][0] = 2e18;
    dp[0][1] = a[0];
    dp[1][0] = dp[0][1]; // i play the second boss
    dp[1][1] = dp[0][1] + a[1]; // my friend plays the second boss
    
    forn(i,2,n)
    {
        // my turn: two possibilities:
        //  - i played the last one ==> my friend played the second to last one
        //  - my friend played the last one
        dp[i][0] = min(dp[i - 2][1], dp[i - 1][1]);
        // friend's turn:
        //  - he played the last one --> i played till the second to last one
        //  - he just started --> i played the last one
        dp[i][1] = a[i] + min(a[i - 1] + dp[i - 2][0], dp[i - 1][0]);
    }

    printf("%d\n", min(dp[n-1][1], dp[n-1][0]));
    return;

}   
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   