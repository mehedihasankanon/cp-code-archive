// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1512/problem/C
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
    ll a, b; cin >> a >> b;
    string s; cin >> s;
    if((a + b != s.size()) or (((a + b) & 1) ^ (s.size() & 1)) or ((a & 1) & (b & 1)))
    {
        cout << -1 << NL;
        return;
    }

    ll lo = 0, hi = s.size() - 1;
    while(lo < hi)
    {
        if(s[lo] != '?')
        {
            if(s[hi] == '?')
            {
                s[hi] = s[lo];
                if(s[lo] == '1') b -= 2;
                else a -= 2;
            }
            else
            {
                if(s[lo] == s[hi])
                {
                    if(s[lo] == '1') b -= 2;
                    else a -= 2;
                }
                else
                {
                    cout << -1 << NL;
                    return;
                }
            }
        }
        else
        {
            if(s[hi] != '?')
            {
                s[lo] = s[hi];
                if(s[lo] == '1') b -= 2;
                else a -= 2;
            }
        }
        lo++, hi--;
    }
    if(lo == hi)
    {
        if(s[lo] == '?')
        {
            if(a&1)
            {
                s[lo] = '0';
                a--;
            }
            else if(b & 1) 
            {
                s[hi] = '1';
                b--;
            }
            else
            {
                cout << -1 << NL;
                return;
            }
        }
        else
        {
            if(s[lo] == '0') a--;
            else b--;
        }
    }

    if(a < 0 or b < 0)
    {
        cout << -1 << NL;
        return;
    }


    lo = 0, hi = s.size() - 1;
    while(lo < hi)
    {
        if(s[lo] == '?')
        {
            if(a)
            {
                s[lo] = '0';
                s[hi] = s[lo];
                a -= 2;
            }
            else if(b)
            {
                s[lo] = '1';
                s[hi] = s[lo];
                b -= 2;
            }
            else
            {
                cout << -1 << NL;
                return;
            }
        }
        lo++, hi--;
    }    
    if(a < 0 or b < 0)
    {
        cout << -1 << NL;
        return;
    }

    cout << s << NL;
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