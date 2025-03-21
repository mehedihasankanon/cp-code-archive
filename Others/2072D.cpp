// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2072/problem/D
// ac
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
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
    ll n; cin >> n;
    vector<ll> a(n + 1,0);

    forn(i,1,n +1) cin >> a[i];

    vector<pair<ll,pair<ll,ll>>> v;

    forn(i,1,n)
    {
        ll t = 0, idx = i + 1, mxt = 0;
        forn(j,i+1, n+1)
        {
            if(a[i] < a[j]) t--;
            else if(a[i] > a[j]) t++;

            if(t > mxt)
            {
                mxt = t;
                idx = j;
            }
        }
        pair<ll,ll> d = {i,idx};
        if(mxt) v.push_back({mxt,d});
    }

    if(v.empty()) 
    {
        cout << 1 << " " <<1 << nl;
        return;
    }

    sort(v.begin(),v.end());

    cout << v.back().second.first << " " << v.back().second.second << nl;
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