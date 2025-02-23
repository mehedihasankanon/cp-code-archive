// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc393/tasks/abc393_d
// status  : upsolved
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
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
    vector<ll> p;
    forn(i,0,n) if(s[i] - '0') p.push_back(i);

    if(p.size() == n || p.size() == 0 || p.size() == 1)
    {
        cout << 0 << nl;
        return;
    }
    // ll lo = 0, hi = 2e18;
    // while(lo < hi - 1)
    // {
    //     ll mid = lo + (hi - lo)/2;


    // }

    ll mm = p.size()/2;

    ll pos = 0, ans = 0;
    rfor(i,mm - 1,0)
    {
        ans += p[mm] - p[i] - pos - 1;
        pos++;
    }
    pos = 0;
    forn(i, mm + 1, p.size())
    {
        ans += p[i] - pos - p[mm] - 1;
        pos++;
    }
    cout << ans << nl;
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