// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/782/problem/B
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
// #define DEBUG
    
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

bool chk(ld a, ld b)
{
    ld a1 = (floor(a * 100000000000.0));
    ld b1 = (floor(b * 100000000000.0));
    return b < a;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> x(n), v(n);
    ll mx = 0, mn = 2e18, mnv = 2e18;
    forn(i,0,n) cin >> x[i], mx = max(mx,x[i]), mn = min(mn,x[i]);
    forn(i,0,n) cin >> v[i], mnv = min(mnv,v[i]);

    ld l = 0.0, r = 1e10;
    forn(i,0,101)
    {
        ld mid = (l + r) / 2.0;
        ld cl = x[0] - mid * v[0], cr = x[0] + mid * v[0];
        bool ok = true;
        forn(i,1,n)
        {
            ld cl1 = x[i] - mid * v[i], cr1 = x[i] + mid * v[i];
            cl = max(cl,cl1), cr = min(cr,cr1);
        }
        if(!chk(cl,cr)) r = mid;
        else l = mid;
    }

    cout << setprecision(15) << fixed << r << nl;
    return;


}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    cerr << setprecision(15) << fixed;
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   