// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/dp/tasks/dp_f
// status  : AC
     
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
    string s; cin >> s; string t; cin >> t;
    vector<vector<ll>> dp(s.size() + 1, vector<ll>(t.size()+ 1, 0));

    forn(i,0,s.size() + 1)
    {
        forn(j,0,t.size() + 1)
        {
            if(i == 0 || j == 0)
                continue;
            else if(s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else  
                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
        }
    }

    string lcs(dp[s.size()][t.size()], 0);
    ll i = s.size(), j = t.size(); ll idx = dp[s.size()][t.size()] - 1;

    // dbg(dp[s.size()][t.size()]);

    while(i && j)
    {
        if(s[i - 1] == t[j - 1]) {lcs[idx--] = s[i - 1];i--;j--;}

        else
        {
            if(dp[i - 1][j] > dp[i][j - 1]) i--;
            else j--;
        }

    }


    cout << lcs << NL;
    return;
}   
    
int main()
{   
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