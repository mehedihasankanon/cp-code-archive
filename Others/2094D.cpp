// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2094/problem/D
// WA AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
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
    string s, t; cin >> s >> t;
    ll idx = 0, idx1= 0;
    while(idx < s.size())
    {
        if(s[idx] == 'L')
        {
            ll cnt = 0, cnt1 = 0;
            while(idx < s.size() && s[idx] == 'L') cnt++, idx++;
            while(idx1 < t.size() && t[idx1] == 'L') cnt1++, idx1++;
            if(cnt1 < cnt || cnt1 > 2 * cnt) 
            {
                cout << "NO" << nl;
                return;
            }
        }
        else
        {
            ll cnt = 0, cnt1 = 0;
            while(idx < s.size() && s[idx] == 'R') cnt++, idx++;
            while(idx1 < t.size() && t[idx1] == 'R') cnt1++, idx1++;
            if(cnt1 < cnt || cnt1 > 2 * cnt) 
            {
                cout << "NO" << nl;
                return;
            }
        }
    }


    // how the fork do i miss this testcase?
    if(idx1 < t.size())
    {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;
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