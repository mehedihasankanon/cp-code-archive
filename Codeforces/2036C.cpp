// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2036/problem/C
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
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    string s; cin >> s;
    ll q; cin >> q;
    if(s.size() < 4)
    {
        forn(i,0,q)
        {
            ll x, y; cin >> x >> y;
            cout << "NO" << NL;
        }
        return;
    }

    forn(i,0,q)
    {
        // ll p; char c; cin >> p >> c;
        // p--;
        // s[p] = c;
        // ll n = s.size();

        // if(p - 3 >= 0 && s.substr(p-3,4) == "1100")
        // {
        //     cout << "YES" << NL;
        // }
        // else if(p - 2 >= 0 && p + 1 <= n - 1 && s.substr(p - 2,4) == "1100")
        // {
        //     cout << "YES" << NL;
        // }
        // else if(p - 1 >= 0 && p + 2 <= n - 1 && s.substr(p - 1,4) == "1100")
        // {
        //     cout << "YES" << NL;
        // }
        // else if(p >= 0 && p + 3 <= n - 1 && s.substr(p,4) == "1100")
        // {
        //     cout << "YES" << NL;
        // }
        // else 
        // {
        //     cout << "NO" << NL;
        // }


        // if(s.find("1100") != string::npos)
        // {
        //     cout << "YES" << NL;
        // }
        // else 
        // {
        //     cout << "NO" << NL;
        // }
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