// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/arc145/tasks/arc145_a
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
    ll n; cin >> n;
    string s; cin >> s;
    if(s.size() == 2)
    {
        if(s == "AB" || s == "BA")
        {
            cout << "No" << NL;
            return;
        }
        else
        {
            cout << "Yes" << NL;
            return;
        }
    }
    // if(*s.begin() == 'A' && *s.rbegin() == 'B')
    // dbg(s.front());
    if(s.front() == 'A' && s.back() =='B')
    {
        // cerr << 1 << NL;
        cout << "No" << NL;
        return;
    }
    cout << "Yes" << NL;
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