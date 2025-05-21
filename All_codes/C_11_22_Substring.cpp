// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc381/tasks/abc381_c
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
    string s; cin >> s;

    ll ind = 0, ans = 1;
    while(ind < n)
    {

        while(ind < n - 1 && s[ind] != '/') ind++;
        // dbg(ind);

        
        if(ind >= 1 && ind <= n - 2)
        {
            if(s[ind - 1] == '1' && s[ind + 1] == '2') 
            {
                ll j = 0;
                while(ind - j >= 1 && ind + j < n - 1)
                {
                    if(s[ind - j - 1] == '1' && s[ind + j + 1] == '2') j++;
                    else break;
                }
                // dbg(j);
                ans = max(2 * j + 1, ans);
                ind += j - 1;
            }
        }
        ind++;
    }

    cout << ans << NL;
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