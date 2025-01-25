// Bismillahir Rahmanir Rahim
     
// link    : https://cses.fi/problemset/task/1092
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
    
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    if(n % 4 == 0)
    {
        vector<ll> s1, s2;
        forn(i,1,n+1)
        {
            if(i % 4 == 0 || (i) % 4 == 1) s1.push_back(i);
            else s2.push_back(i);
        }
        cout << "YES\n";
        cout << s1.size() << NL;
        for(auto x : s1) cout << x << " ";
        cout << NL << s2.size() << NL;
        for(auto x : s2) cout << x << " ";
        cout << NL;
        return;
    }
    else if((n+1) % 4 == 0)
    {
        vector<ll> s1, s2;
        s2.push_back(n);
        forn(i,1,(n+1)/2)
        {
            if(i&1)
            {
                s1.push_back(i);
                s1.push_back(n-i);
            }
            else
            {
                s2.push_back(i);
                s2.push_back(n-i);
            }
        }
        cout << "YES\n";
        cout << s1.size() << NL;
        for(auto x : s1) cout << x << " ";
        cout << NL << s2.size() << NL;
        for(auto x : s2) cout << x << " ";
        cout << NL;
        return;
    }
    else 
    {
        cout << "NO" << NL;
        return;
    }
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