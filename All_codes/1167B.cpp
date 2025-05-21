// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1167/problem/B
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
// #define NL "\n"
#define nl endl
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
}   
    
    
void Solve(ll test)
{
    vector<ll> v = {4,8,15,16,23,42};
    vector<ll> a(4);

    forn(i,0,4)
    {
        cout << "? " << i + 1 << " " << i + 2 << nl;
        cin >> a[i];
    }

    do
    {
        bool ok = true;
        forn(i,0,4)
        {
            if(v[i] * v[i + 1] != a[i]) 
            {
                ok = false;
                break;
            }
        }

        if(ok)
        {
            cout << "! ";
            forn(i,0,6)
            {
                cout << v[i] << " ";
            }
            cout << nl;
            return;
        }
    } while(next_permutation(v.begin(),v.end()));

    
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