// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1768/problem/C
// status  : WA
     
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
    
#define DBG(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    ll n; cin >> n;
    map<ll,vector<ll>> mp;
    bool ok = true;

    forn(i,0,n) {
        ll x; cin >> x;
        mp[x].push_back(i);
        if(mp[x].size() > 2) ok = false; 
    }

    if(!ok) {
        cout << "NO\n";
        return;
    }

    vector<ll> a(n), b(n);

    rfor(i,n,n/2+1) {
        if(mp[i].size() == 0) {
            cout << "NO\n";
            return;
        }
        else if(mp[i].size() == 1) {
            a[mp[i].back()] = i;
            b[mp[i].back()] = i;
        }
        else {
            a[mp[i].back()] = i;
            a[mp[i].front()] = n-i+1;
            b[mp[i].front()] = i;
            b[mp[i].back()] = n-i+1;
        }
    }
    rfor(i,n/2,0) {
        if(mp[i].size() == 1) {
            a[mp[i].back()] = i;
            b[mp[i].back()] = i;
        }
    }

    cout << "YES\n";
    forn(i,0,n) {
        cout << a[i] << " ";
    }
    cout << NL;
    forn(i,0,n) {
        cout << b[i] << " ";
    }
    cout << NL;
    return;
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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