// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1110/problem/B
// status  : WA AC
     
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
    
}   
    
    
void Solve(ll test)
{
    ll n,m,k; cin >> n >> m >> k;
    vector<ll> diff(n-1);

    ll prev, curr, ans = k, cnt = n; cin >> prev;
    forn(i,0,n-1)
    {
        cin >> curr;
        diff[i] = curr - prev; // why not curr - prev - 1?
                               // we are forgetting, to add thw two pieces together, we need an extra length 1
        prev = curr;
    }

    sort(diff.begin(),diff.end(),greater());

    while(!diff.empty() && cnt > k)
    {
        ans += diff.back();
        cnt--;
        // dbg(ans);
        diff.pop_back();
    }

    cout << ans << NL;
    return;

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