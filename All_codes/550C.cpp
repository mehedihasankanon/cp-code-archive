// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/550/problem/C
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    string s; cin >> s;
    ll t = 0LL;

    forn(i,0,s.size())
    {
        t += s[i] - '0';
        if(t % 8 == 0)
        {
            cout << "YES" << nl << t << nl;
            return;
        }
        forn(j,i+1,s.size())
        {
            t = t * 10 + s[j] - '0';
            if(t % 8 == 0)
            {
                cout << "YES" << nl << t << nl;
                return;
            }
            forn(k,j+1,s.size())
            {
                t = t * 10 + s[k] - '0';
                if(t % 8 == 0)
                {
                    cout << "YES" << nl;
                    cout << t << nl;
                    return;
                }
                t = (t - s[k] + '0')/10;
            }
            t = (t - s[j] + '0')/10;
        }
        t -= s[i] - '0';
    }
    cout << "NO" << nl;
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