// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1352/problem/E
// status  : MLE AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
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
    ll n; cin >> n;
    vector<ll> pref(n + 1,0);
    // map container was the issue!
    // map<ll,ll> mp;
    vector<ll> mp(n + 1,0);
    // unordered_map works too, but takes more time (about double)
    // unordered_map<ll,ll> mp;
    forn(i,1,n+1)
    {
        cin >> pref[i];
        // v[i - 1] = pref[i];
        pref[i] += pref[i - 1];
        forn(j,0,i - 1)
        {
            if(pref[i] - pref[j] <= n) mp[pref[i] - pref[j]]++;
        }
    }

    ll cnt = 0;
    forn(i,1,n+1)
    {
        cnt += (mp[pref[i] - pref[i - 1]] > 0);
    }



    cout << cnt << NL;
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