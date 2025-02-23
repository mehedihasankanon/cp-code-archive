// #pragma GCC optimize("O1,O2,O3")

#include <iostream>
#include <vector>   

using namespace std;
    
using ll = int;
    
ll M = 1000000007;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;
    
void Solve(ll test)
{
    ll n, x; cin >> n >> x;
    vector<ll> coins(n), dp(x + 1);
    dp[0] = 1;
    forn(i,0,n) cin >> coins[i];

    forn(i,1,x+1) for(int c : coins) if(i - c >= 0) (dp[i] += dp[i - c]) %= M;

    cout << dp[x] << NL;
    return;
    
}   
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);

    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   