// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A
// status  : ac
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n; cin >> n;
    vll p(n),v(n);
    ll mn = M, mx = -M;
    forn(i,0,n) {cin >> p[i] >> v[i]; mx = max(p[i],mx); mn = min(p[i],mn);}

    ld l = 0.0, r = abs(mx - mn), mid;
    forn(i,0,101)
    {
        mid = (l+r)/2;
        // dbg(mid);
        ld lc = p[0]-mid*v[0], rc= p[0]+mid*v[0];
        bool fl = true;
        forn(i,1,n)
        {
            if(max(lc,p[i]-mid*v[i]) > min(rc,p[i]+mid*v[i])) 
            {
                fl = false; break;
            }
            else lc = max(lc,p[i]-mid*v[i]), rc = min(rc,p[i]+mid*v[i]);
            // dbg(lc); dbg(rc);
        }
        if(fl) r = mid;
        else l = mid;

    } 
    cout << setprecision(13) << fixed << l << nl;
    return;



}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   