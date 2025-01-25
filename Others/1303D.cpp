// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1303/problem/D
// status  : ***editorial***
     
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
    ll x; cin >> x;
    // dbg(x);
    vector<ll> n(64,0);
    forn(i,0,64)
    {
        // dbg(i);
        // dbg((ll)(1 << i));
        if(x&((ll)(1LL<<i))) n[i]++;
        // dbg(n[i]);
        // cerr << n[i] << " ";
    }
    // cerr << NL;
    vector<ll> v(64,0);
    ll m; cin >> m;
    ll s = 0;
    forn(i,0,m)
    {
        ll x; cin >> x;
        s+=x;
        ll p = 0;
        while(x > 1LL)
        {
            p++;
            x>>=1LL;
        }
        v[p]++;
        // dbg(p); dbg(v[p]);
    }
    if(s < x)
    {
        cout << -1 << NL;
        return;
    }

    ll ans = 0;
    forn(i,0,63)
    {
        // dbg(i);
        // dbg(n[i]);
        // dbg(v[i]);
        if(n[i])
        {
            if(v[i])
            {
                v[i]--;
                n[i]--;
                v[i+1]+=v[i]/2;
            }
            else
            {
                // dbg(i);
                ll j = i;
                while(j < 63 && !v[j]) 
                {
                    j++; ans++;
                }
                // dbg(j);
                v[j]--;
                n[i]--;
                while(j > i)
                {
                    v[--j]++;
                }
            }
        }
        else
        {
            if(v[i])
            {
                v[i+1] += v[i]/2;
            }
        }
                // dbg(ans);

    }

    cout << ans << NL;
    // cerr << "--------------------" << NL;
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