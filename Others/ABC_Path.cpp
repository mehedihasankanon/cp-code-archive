// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/SPOJ-ABCPATH
// help
    
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
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
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


ll h, w;
char c = '\0';
vector<pair<ll,ll>> moves = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

// wrong!

ll dfs(vector<string>& v, ll x, ll y,vector<vector<ll>>& dp)
{
    if(dp[x][y] != -1) return dp[x][y];

    ll ans = 1;
    for(auto m : moves)
    {
        ll x1 = x + m.first, y1 = y + m.second;
        if(x1 >= 0 && y1 >= 0 && x1 < h && y1 < w && v[x][y] + 1 == v[x1][y1])
        {
            ans = max(ans,1 + dfs(v,x1,y1,dp));
        }
    }
    return dp[x][y] = ans;
}

ll Solve(ll test)
{ 
    cin >> h >> w;
    if(h == 0 && w == 0) return 1;
    vector<string> v(h); forn(i,0,h) cin >> v[i];
    vector<pair<ll,ll>> pos;
    forn(i,0,h) forn(j,0,w) {c = max(c,v[i][j]); if(v[i][j] == 'A') {pos.push_back({i,j});}}

    vector<vector<ll>> dp(h,vector<ll>(w,-1));

    ll ans = 0;
    for(auto p : pos)
    {
        ans = max(ans,dfs(v,p.first,p.second,dp));
    }
    cout << "Case " << test << ": " << ans << nl;
    return 0;
}   
    
// ll Solve(ll test)
// {

// }

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test = 1;
    while(1)
    {
        ll t = Solve(test++);
        if(t) return 0;
    }


    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   