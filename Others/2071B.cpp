// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2071/problem/B
// editorial
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
void Solve(ll test)
{
    // totally wrong

    // ll n; cin >> n;

    // ll temp = (n * (n + 1)) / 2;
    // ll rt = (ll)sqrtl((ld)temp);
    // if(rt * rt == temp)
    // {
    //     cout << -1 << nl;
    //     return;
    // }

    // queue<ll> sqr;
    // vector<ll> v(n+1,0);
    // ll t = 1; while(t  * t <= n)
    // {
    //     v[t * t]++;
    //     sqr.push(t*t);
    //     t++;
    // }

    // v[2]++;
    // cout << 2 << " ";
    // queue<ll> rem;
    // ll tot = 2;
    // while(!sqr.empty())
    // {
    //     cout << sqr.front() << " ";
    //     tot += sqr.front();
    //     sqr.pop();
    // }

    // forn(i,1,n+1)
    // {
    //     if(!v[i])
    //     {
    //         tot += i;
    //         ll r = (ll)sqrtl((ld)tot);
    //         if(r * r == tot)
    //         {
    //             rem.push(i);
    //             tot -= i;
    //             continue;
    //         }
    //         else
    //         {
    //             cout << i << " ";
    //             v[i]++;
    //         }
    //     }
    // }

    // while(!rem.empty())
    // {
    //     ll i = rem.front();
    //     rem.pop();
    //     cout << i << " ";
    // }

    // cout << nl;
    // return;
    // return;

    ll n; cin >> n;
    vector<ll> v;
    forn(i,1,n+1) v.push_back(i);

    ll pref = 0;
    forn(i,0,n-1)
    {
        pref += v[i];
        ll r = (ll)sqrtl((ld)pref);
        if(r * r == pref)
        {
            pref -= v[i];
            swap(v[i],v[i+1]);
            pref += v[i];
        }
    }
    pref += v[n - 1];

    
    ll r = (ll)sqrtl((ld)pref);
    if(r*r == pref)
    {
        cout << -1 << nl;
        return;
    }
    forn(i,0,n)
    {
        cout << v[i] << " ";    
    }
    cout << nl;
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