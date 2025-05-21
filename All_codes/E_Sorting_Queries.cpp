// Bismillahir Rahmanir Rahim
     
// link    : https://atcoder.jp/contests/abc217/tasks/abc217_e
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
    // TLE 

    // ll a0 = 0;
    // bool srt = false;
    // vector<ll> v;
    // ll q; cin >> q;
    // forn(i,0,q)
    // {
    //     ll tp; cin >> tp;
    //     if(tp == 1)
    //     {
    //         ll x; cin >> x; v.push_back(x);
    //         srt = false;
    //     }
    //     else if(tp == 2)
    //     {
    //         cout << v[a0++] << NL;
    //     }
    //     else
    //     {
    //         // if(!srt) sort(v.begin() + a0, v.end());
    //         srt = true;
    //     }
    // }

    ll q; cin >> q;
    bool srt = true;
    deque<ll> qu; multiset<ll> ms;
    forn(i,0,q)
    {
        ll typ; cin >> typ;
        if(typ == 1)
        {
            ll x; cin >> x;
            qu.push_back(x); ms.insert(x);
            srt = false;
        }
        else if(typ == 2)
        {
            if(!srt)
            {
                ll out = qu.front();
                qu.pop_front();
                cout << out << NL;
                ms.erase(ms.find(out));
            }
            else
            {
                ll out = *ms.begin();
                ms.erase(ms.begin());
                cout << out << NL;
                qu.erase(find(qu.begin(),qu.end(),out));
            }
        }
        else 
        {
            srt = true;
        }
    }
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