// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1399/problem/D
// status  : AC
     
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
    
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> v(n,0);

    queue<ll> q0, q1;
    // q.push(1);
    ll ans = 1;
    v[0] = 1;
    if(s[0] - '0') q0.push(1);
    else q1.push(1);
    // q.push({1,s[0] - '0'});
    forn(i,1,n)
    {
        if(s[i] - '0')
        {
            if(q1.empty())
            {
                v[i] = ++ans; // have to start a new subsequence
                q0.push(ans); // this subsequence will want a zero next
            }
            else
            {
                v[i] = q1.front();
                q0.push(q1.front());
                q1.pop();
            }
        }
        else
        {
            if(q0.empty())
            {
                v[i] = ++ans; // have to start a new subsequence
                q1.push(ans); 
            }
            else
            {
                v[i] = q0.front();
                q1.push(q0.front());
                q0.pop();
            }
        }
    }

    cout << ans << NL;
    forn(i,0,n) cout << v[i] << ' ';
    cout << NL;

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