// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/632/problem/C
// status  : wa ac
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
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

void Pre(void)
{   
    
}   

// bool comp (string s1, string s2)
// {
//     if(s1.size()==s2.size()) return s1 < s2;
//     else
//     {
//         if(s1.size() < s2.size())
//         {
//             forn(i,0,s1.size())
//             {
//                 if(s1[i] < s2[i]) return true;
//                 else if(s2[i] < s1[i]) return false;
//             }
//             forn(i,s1.size(),s2.size())
//             {
//                 if(s2[i] < s1[0]) return false;
//             }
//             return true;
//         }
//         else
//         {
//             forn(i,0,s2.size())
//             {
//                 if(s2[i] < s1[i]) return false;
//                 else if(s2[i] > s1[i]) return true;
//             }
//             forn(i,s2.size(),s1.size())
//             {
//                 if(s1[i] < s2[0]) return true;
//             }
//             return false;
//         }
//     }


// }


// using the comparator effectively
bool comp (string s1, string s2) {return s1+s2 < s2 + s1;}
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    vector<string> v(n);
    forn(i,0,n) cin >> v[i];

    sort(v.begin(),v.end(), comp);
    for(auto s:v) cout << s;
    cout << nl;
    return;

}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   