// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2064/problem/A
// status  : ac
     
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
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    string s; cin >> s;
    
    // ll idx = 0, hi = n;
    // while(idx < n && s[idx] == '0') idx++;
    // while(hi > 1 && s[hi - 1] == '1') hi--;

    // ll ans = 0;
    // if(hi != n) ans++;
    // while(idx < hi)
    // {
    //     while(idx < hi && s[idx] == '1') idx++;
    //     // if()
    // }

    vector<ll> ind;
    ind.push_back(0);
    forn(i,1, n)
    {
        if(s[i] != s[i - 1]) {ind.push_back(i);}
    }

    ll ans = ind.size();
    // dbg(ans);
    // forn(i,0,ans) cerr << ind[i] << " ";
    // cerr << nl;
    if(s[0] == '0') ans--;
    // if(s[n - 1] == '1') ans--;

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