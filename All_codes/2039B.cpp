// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2039/problem/B
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



int f(string str) {
    set<string> s;

    forn(i,0,str.size())
    {
        string temp = "";
        for (ll j = i; j < str.size(); j++) {
            temp += str[j];
            s.insert(temp); 
        }
    }

    return s.size();
}

    
    
void Solve(ll test)
{
    string s; cin >> s;
    if(s.size() == 1 || s.size() == 2 && s[0] != s[1])
    {
        cout << -1 << NL;
        return;
    }

    forn(i,1,s.size())
    {
        if(s[i] == s[i - 1])
        {
            cout << s[i] << s[i - 1] << NL;
            return;
        }
    }
    forn(i,2,s.size())
    {
        if(s[i] != s[i-1] && s[i] != s[i - 2] && s[i -1] != s[i - 2])
        {
            cout << s[i-2] << s[i - 1] << s[i] << NL;
            return;
        }

    }

    cout << -1 << NL;
    return;
    // if(s.size() == 1 || (s.size() == 2 && s[0] != s[1]))
    // {
    //     cout << -1 << NL;
    //     return;
    // } 

    // forn(i,1,s.size())
    // {
    //     if(s[i] == s[i - 1])
    //     {
    //         cout << s[i] << s[i - 1] << NL;
    //         return;
    //     }
    //     else
    //     {
    //         if(i < s.size() - 1 && s[i + 1] != s[i] && s[i + 1] != s[i - 1])
    //         {
    //             cout << s[i-1] << s[i] << s[i + 1] << NL;
    //             return;
    //         }
    //         else 
    //         {
    //             if(i < s.size() - 2 && s[i + 2] == s[i] && s[i + 1] != s[i])
    //             {
    //                 cout << s[i - 1] << s[i] << s[i+1] << s[i + 2] << NL;
    //                 return;
    //             }   
    //         }
    //     }
    // }
    // cout << -1 << NL;
    // return;



    // forn(i,0,s.size())
    // {
    //     // forn(j,1,max(4LL,(ll)s.size()) - i + 1)
    //     forn(j,2,s.size() + 1 - i)
    //     {
    //         // dbg(j);
    //         string s1 = s.substr(i,j);
    //         if(!(f(s1) & 1)) 
    //         {
    //             cout << s1 << NL;
    //             return;
    //         }
    //     }
    // }
    // cout << -1 << NL;
    // return;
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