// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/754/problem/A
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
    if(n == 1)
    {
        ll x;
        cin >> x;
        if(!x) cout << "NO" << NL;
        else cout << "YES\n1\n1 1\n";
        return;
    }
    vector<ll> v(n), pref(n+1,0);
    forn(i,0,n)
    {
        cin >> v[i];
        pref[i+1] = v[i] + pref[i];
    }
    if(pref[n] != 0) 
    {
        cout << "YES\n1\n";
        cout << 1 << " " << n << NL;
        return;
    }

    forn(i,1,n)
    {
        ll s1 = pref[i];
        if(s1 != pref[n])
        {
            cout << "YES\n2" << NL;
            cout << 1 << " " << i << NL;
            cout << i+1 << " " << n << NL;
            return;
        }
    }
    cout << "NO\n";
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