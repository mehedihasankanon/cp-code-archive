// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1873/problem/C
// status  : 
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

vector<vector<ll>> pts(10);
void Pre(void)
{   
    forn(i,0,10) pts[i].resize(10);
    // forn(i,0,10)
    // {
    //     forn(j,i,10-i) {pts[i][j]=(i+1)%5; if(pts[i][j]==0)pts[i][j]+=5;}
    // }
    forn(i,1,6)
    {
        forn(j,i,5)
        {
            pts[i-1][j]=i;
            pts[i-1][4+j]=i;

            pts[j][i-1]=i;
            pts[4+j][i-1]=i;


            pts[10-i][j]=i;
            pts[10-i][10-j]=i;

            pts[j][10-i]=i;
            pts[4+j][10-i]=i;
        }
    }
    forn(i,0,5) 
    {
        pts[i][i] = i+1;
        pts[9-i][i]=i+1;
        pts[i][9-i]=i+1;
        pts[9-i][9-i]=i+1;
    }
    forn(i,0,10)
    {
        forn(j,0,10) cout << pts[i][j] << " ";
        cout << nl;
    }
    return;
}   
    
    
void Solve(ll test)
{   
    ll ans = 0;
    forn(i,0,10)
    {
        string s; cin >> s;
        forn(j,0,10) if(s[j]=='X') ans+=pts[i][j];
    }
    cout << ans << nl;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        //Solve(test);
    }
    return 0;
}   