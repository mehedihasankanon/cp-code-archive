// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2061/problem/D
// status  : 
     
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
    ll n , k; cin >> n >> k;
    map<ll,ll> m1, m2;

    ll s1 = n , s2 = 0;
    forn(i,0,n)
    {
        ll x; cin >> x; m1[x]++;
    }
    forn(i,0,k)
    {
        ll x; cin >> x;
        if(m1[x])
        {
            m1[x]--;
            s1--;
            if(!m1[x]) m1.erase(x);
        }
        else 
        {
            s2++;
            m2[x]++;
        }
    }


    if(s1 <= s2)
    {
        cout << "No" << NL;
        return;
    }

    for(auto [u,v] : m2)
    {
        while(v)
        {
            if(u & 1)
            {
                if(!m1[u/2] || !m1[u/2 + 1])
                {
                    cout << "No" << NL;
                    return;
                }
                m1[u/2]--;
                m1[u/2 + 1]--;
            }
            else
            {
                // if(m1[v/2] /= )
                ll t = 1, m = u ;
                while(m)
                {
                    m /= 2; t *= 2;
                    if(m1[m] >= t) 
                    {
                        m1[m] -= t;
                        break;
                    }
                }
                cout << "No" << NL;
                return;
                // if(m[])
            }
            v--;
        }
    }



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