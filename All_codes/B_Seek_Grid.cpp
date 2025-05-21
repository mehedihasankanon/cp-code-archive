// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc391/tasks/abc391_b
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
    ll n, m; cin >> n >> m;
    vector<vector<char>> s(n,vector<char>(n,0)), t(m,vector<char>(m,0));

    forn(i,0,n) 
    {
        string st; cin >> st;
        forn(j,0,n) s[i][j] = st[j];
    }
    forn(i,0,m) 
    {
        string st; cin >> st;
        forn(j,0,m) t[i][j] = st[j];
    }

    // forn(i,0,n) {forn(j,0,n) {cerr << s[i][j] << ' ';} cerr << NL;} 

    forn(a,0,n - m + 1)
    {
        forn(b,0,n - m + 1)
        {
            // dbg(a); dbg(b);
            if(s[a][b] == t[0][0])
            {
                bool fl = true;
                forn(i,0,m) 
                {
                    forn(j,0,m) 
                    {
                        // dbg(s[])
                        // dbg(a + i); dbg(b + j);
                        // cerr << s[a+i][b + j] << " " << t[i][j] << NL;
                        if(s[a+i][b+j] != t[i][j]) 
                            {fl = false; break;}
                    } 
                    if(!fl) break;
                }
                if(fl)
                {
                    cout << a + 1 << " " << b + 1 << NL;
                    return;
                }
            }
        }
    }

    cout << "LIAR" << NL;
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