// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/2114/problem/0
// 
    
#pragma GCC optimize("O3,unroll-loops")
    
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

ll sqrt_(ll x) {
    if (x < 2) return x;

    ll low = 1, high = x / 2, ans = 1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll square = mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            ans = mid;      
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

    
    
void Solve(ll test)
{
    // string s; cin >> s;
    // string s1, s2;
    // int yr = stoi(s);
    // s1.push_back(s[0]);
    // forn(i,1,4) s2.push_back(s[i]);

    // int y1 = stoi(s1), y2 = stoi(s2);
    // if(y1 * y1 + y2 * y2 == yr)
    // {
    //     cout << y1 << " " << y2 << nl;
    //     return;
    // }

    // s1.push_back(s[1]);
    // s2.clear();
    // forn(i,1,4) s2.push_back(s[i]);
    // y1 = stoi(s1), y2 = stoi(s2);
    // if(y1 * y1 + y2 * y2 == yr)
    // {
    //     cout << y1 << " " << y2 << nl;
    //     return;
    // }

    // s1.push_back(s[2]);
    // s2.clear();
    // s2.push_back(s[3]);
    // y1 = stoi(s1), y2 = stoi(s2);
    // if(y1 * y1 + y2 * y2 == yr)
    // {
    //     cout << y1 << " " << y2 << nl;
    //     return;
    // }

    // cout << -1 << nl;
    // return;

    ll x; cin >> x;
    if(x == 0)
    {
        cout << "0 0" << nl;
        return;
    }


    ll t = (ll)sqrtl(x*1.0);
    if(t * t == x)
    {
        cout << 1 << " " << t - 1 << nl;
        return;
    }
    cout << -1 << nl;
    return;
    // for(ll i = 0; i * i <= x; i++)
    // {
    //     ll t = sqrt_(x - i * i);
    //     if(t * t + i * i == x)
    //     {
    //         cout << i << " " << t << nl;
    //         return;
    //     }
    // }
    // cout << -1 << nl;
    // return;

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