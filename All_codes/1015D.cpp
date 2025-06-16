// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/1015/problem/D
// WA AC
    
#pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("avx2")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
// #define DEBUG
    
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
    
    
void Solve(ll test)
{
    ll n, k, s; cin >> n >> k >> s;
    if(s < k || (n - 1) * k < s)
    {
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;

    vector<ll> ans(k,n - 1);
    ll sum = k * (n - 1);
    for(int i = 0; i < k ; i++)
    {
        dbgc(ans);
        if(sum - s == 0) break;
        else if(sum - s >= n - 1) 
        {
            ans[i] = 1;
            sum -= n - 2;
        }
        else
        {
            ans[i] = (n - 1) - (sum - s);
            sum = s;
        }
    }
    sort(ans.begin(), ans.end(), greater());
    dbgc(ans);
    ll pos = 1;
    for(auto t : ans)
    {
        if(pos + t <= n) 
        {
            pos += t;
            cout << pos << " ";
        }
        else
        {
            pos -= t;
            cout << pos << " ";
        }
    }
    cout << nl;


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