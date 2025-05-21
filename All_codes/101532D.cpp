// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/gym/101532/problem/D
// status  : TLE WA AC
     
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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    vector<vector<ll>> v(n + 1, vector<ll>(26,0));

    forn(i,0,n)
    {
        v[i+1] = v[i];
        v[i+1][s[i] - 'a']++;
    }

    // forn(i,0,n+ 1)
    // {
    //     forn(j,0,26) cerr << v[i][j] << " ";
    //     cerr << NL;
    // }

    forn(i,0,k)
    {
        ll st, en; char c;
        cin >> st >> en >> c;
        if(ceil(1.0*st/n) < floor(1.0*en/n))
        {
            ll ans = (-ceil(1.0*st/n) + floor(1.0*en/n)) * v[n][c - 'a'];
            ans += v[n][c - 'a'] - v[(st - 1)%n][c - 'a'] + v[en%n][c - 'a'] - v[0][c - 'a'];
            cout << ans << NL;
        }
        else if(ceil(1.0*st/n) == floor(1.0*en/n))
        {
            ll ans = 0;
            ans += v[n][c - 'a'] - v[(st - 1)%n][c - 'a'] + v[en%n][c - 'a'] - v[0][c - 'a'];

            cout << ans << NL;
        }
        else
        {
            ll ans = 0;
            // ans += v[n][c - 'a'] - v[(st - 1)%n][c - 'a'] + v[en%n][c - 'a'] - v[0][c - 'a'];

            // cout << ans/2 << NL;
            // apparently ans/2 wont work. got wa here
            // this brute force got me through, although barely passed the time limit
            // 1746 ms / 2000 ms
            forn(i,st-1,en)
            {
                if(s[i%n] == c) ans++;
            }

            cout << ans << NL;
        }
    }
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