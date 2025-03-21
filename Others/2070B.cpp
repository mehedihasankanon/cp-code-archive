// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2070/problem/B
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
    
// #define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
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
    ll n,p,k;
    cin >> n >> p >> k;
    string s;cin >> s;

    ll cnt = -1, st = 0;
    bool reach = false;
    if(p == 0) reach = true;
    if(!reach) forn(i,0,n)
    {
        if(s[i] == 'L') p--;
        else p++;
        if(p == 0)
        {
            reach = true;
            if(k >= i + 1)
            {
                k -= i + 1;
            }
            else
            {
                cout << 0 << nl;
                return;
            }
            st = i + 1;
            break;
        }
    }
    dbg(k);

    ll temp = 0;
    forn(i,0,n)
    {
        if(s[i] == 'L') temp--;
        else temp++;
        if(temp == 0)
        {
            cnt = i + 1;
            break;
        }
    }
    dbg(cnt);

    ll ans = (st > 0);
    if(cnt != -1 && p == 0)
    {
        ans += k / cnt;
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
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   