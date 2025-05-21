// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc352/tasks/abc352_b
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
    
#define DBG(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
}   
    
    
void Solve(ll test)
{
    queue<char> q;
    do
    {
        char ch = cin.get();
        if(ch == '\n') break;
        q.push(ch);
        // DBG(ch); DBG(q.size());
    } while(true);
    // getchar();
    string s; cin >> s;
    // DBG(s);
    forn(i,0,s.size())
    {
        // DBG(s[i]);
        if(s[i] == q.front())
        {
            cout << i+1 << " ";
            q.pop();
        }
    }
    cout << NL;
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