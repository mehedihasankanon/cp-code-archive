// Bismillahir Rahmanir Rahim
     
// link    : https://www.codechef.com/START173C/problems/MINOVER
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
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n, m; cin >> n >> m;
    ll idx = 0, mn = INF;
    vector<ll> a(n), b(m);
    forn(i,0,n) cin >> a[i];
    forn(i,0,m) 
    {
        cin >> b[i];
        if(b[i] < mn)
        {
            idx = i;
            mn = b[i];
        }
    }

    if(m == 1)
    {
        forn(i,0,n)
        {
            if(a[i] > b[0]) a[i] = b[0];
        }
        forn(i,0,n) cout << a[i] << " ";
        cout << NL;
        return;
    }

    vector<ll> b1(m);
    forn(i,0,m)
    {
        b1[i] = b[(idx + i) % m];
    }

    idx = 0;
    while(idx <= n - m)
    {
        while(a[idx] <= b1[0]) idx++;
        if(a[idx] > b1[0]) break;
        // if(a[idx] >= b1[0]) break;
    }

    // dbg(idx);
    bool fl1 = false;
    if(idx <= n - m) {
        fl1 = true;
        for(ll i = idx; idx <= n - m; idx++)
        {
            a[idx] = b1[0];
            // dbg(a[idx]);
        }
        while(idx < n) {a[idx] = b1[idx - (n - m)]; idx++;}
    }
    else if(!fl1 && a[n - m] == b1[0])
    {
        ll fl = 0;
        for(ll i = n - m; i < n; i++)
        {
            if(a[i] > b1[-n + m + i])
            {
                fl = 1; break;
            }
        }
        if(fl) forn(i,n - m, n) a[i] = b1[i - (n - m)];
    }

    forn(i,0,n) cout << a[i] << " ";
    cout << NL;
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