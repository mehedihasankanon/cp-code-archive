// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2072/problem/C
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
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
    ll n,k ; cin >> n >> k;
    // ll t = n;
    vector<ll> a;
    // a.push_back(k); n--;
    // if(n) 
    // {
    //     a.push_back(0);
    //     n--;
    // }

    // ll mx = 0;
    // while(t & 1)
    // {
    //     t >>= 1;
    //     mx <<= 1;
    //     mx++;
    // }
    
    // forn(i,1,min(mx,n) + 1) a.push_back(i);
    // n = max(n - mx, 0LL);
    // while(n--) a.push_back(k);

    // for(auto x : a) cout << x << " ";
    // cout << nl;


    if(n == 1)
    {
        cout << k << nl;
        return;
    }
    else if(n == 2)
    {
        cout << 0 << " " << k << nl;
        return;
    }

    a.push_back(0);
    ll t = k;
    n--;
    ll mx = 0;
    while(t & 1)
    {
        mx ++;
        t >>= 1;
    }
    // dbg(mx);

    ll num = ~((~0) << mx);
    ll temp = 1, r = 0;
    for(ll i = 1;n > 1 && num > 0;i++)
    {
        a.push_back(i);
        temp++;
        n--;
        num--;
        r |= i;
    }
    // dbg(test);
    // dbg(r);
    // dbg(temp);
    // dbg((r | temp));
    // dbg(k);
    // dbg(n);
    if(num > 0 && (r | temp) == k) 
    {
        a.push_back(temp);
        n--;
    } 
    while(n--) a.push_back(k);

    for(auto x : a) cout << x << " ";
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