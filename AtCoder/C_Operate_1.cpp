// Bismillahir Rahmanir Rahim
     
// link    : 
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
    ll k; cin >> k;
    string s; cin >> s;
    string t; cin >> t;

    // vector<ll> vs(26,0), vt(26,0);
    // for(auto c : s) vs[c - 'a']++;
    // for(auto c : t) vt[c - 'a']++;

    // ll d = 0;
    // forn(i,0,26)
    // {
    //     d += abs(vs[i] - vt[i]);
    //     dbg(d);
    // }
    // if(d > 1)
    // {
    //     cout << "No" << NL;
    //     return;
    // }
    // cout << "Yes" << NL;
    // return;

    if(abs((ll)s.size() - (ll)t.size()) > 1)
    {
        cout << "No" << NL;
        return;
    }
    if(s.size() - t.size() == 1LL)
    {
        // removed one char
        ll mismatch = 0, pos = s.size() - 1;
        forn(i,0,s.size() - 1)
        {
            if(s[i] != t[i])
            {
                pos = i; break;
            }
        }
        t.resize(s.size());
        for(ll i = t.size() - 1; i > pos; i--) t[i] = t[i - 1];
        t[pos] = s[pos];
    }
    if(s.size() == t.size())
    {
        forn(i,0,s.size())
        {
            if(s[i] != t[i]) 
            {
                s[i] = t[i];
                break;
            }
        }
    }
    if(s.size() - t.size() == -1LL)
    {
        // added one char
        
        ll mismatch = 0, pos = t.size() - 1;
        forn(i,0,t.size() - 1)
        {
            if(t[i] != s[i])
            {
                pos = i; break;
            }
        }
        s.resize(t.size());
        for(ll i = s.size() - 1; i > pos; i--) s[i] = s[i - 1];
        s[pos] = t[pos];
    }
    if(s == t)
    {
        cout << "Yes" << NL;
        return;
    }
    else
    {
        cout << "No" << NL;
        return;
    }

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