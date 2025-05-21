// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/550/problem/A
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
    string s; cin >> s;
    if(s.size() <= 3)
    {
        cout << "NO" << NL;
        return;
    }

    vector<ll> l1;
    forn(i,0, s.size() - 1)
    {
        if(s[i] == 'A' && s[i + 1] == 'B') {l1.push_back(i);}
    }
    vector<ll> l2;
    forn(i,0, s.size() - 1)
    {
        if(s[i] == 'B' && s[i + 1] == 'A') l2.push_back(i);
    }

    if(l1.size() == 0 || l2.size() == 0)
    {
        cout << "NO" << NL;
        return;
    }

    if(l1.size() == 1 && l2.size() == 1)
    {
        if(abs(l2[0] - l1[0]) == 1)
        {
            cout << "NO" << NL;
            return;
        }
    }

    if(l1.size() == 2 && l2.size() == 1)
    {
        if(l1[0] + 1 == l2[0] && l2[0] + 1 == l1[1])
        {
            cout << "NO" << NL;
            return;
        }
    }

    if(l2.size() == 2 && l1.size() == 1)
    {
        if(l2[0] + 1 == l1[0] && l1[0] + 1 == l2[1])
        {
            cout << "NO" << NL;
            return;
        }
    }

    cout << "YES" << NL;
    return;





    // if(abs(l2 - l1) == 1) 
    // {
    //     cout << "NO" << NL;
    //     return;
    // }

    cout << "YES" << NL;
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