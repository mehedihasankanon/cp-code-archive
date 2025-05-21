// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/1746/problem/C
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define debug(n) cout<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define debugc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<el<<" ";}cout<<']'<<endl;
#define debugcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cout<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cout<<']'<<endl;
#else
#define debug(n) // single variable, string
#define debugc(a) // vector, deque, array
#define debugcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   

bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.second > b.second) return true;
    else if(a.second == b.second && a.first < b.first) return true;
    return false;
}
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> v(n + 1);
    forn(i,1,n+1) cin >> v[i];

    vector<ll> ans(n + 1, -1);
    vector<pair<ll,ll>> diff;
    ll add = 0, curr_max = v[1];
    forn(i,2,n + 1)
    {
        if(v[i] < curr_max)
        {
            diff.push_back({i,-v[i] + curr_max});
        }
        curr_max = max(curr_max, v[i]);
    }

    sort(diff.begin(),diff.end(), comp);
    ll pl = n;
    for(auto [u,v] : diff)
    {
        ans[pl--] = u;
    }

    forn(i,1,n+1)
    {
        if(ans[i] == -1) ans[i] = 1;
        cout << ans[i] << " ";
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