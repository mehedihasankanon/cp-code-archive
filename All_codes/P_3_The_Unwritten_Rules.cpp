// Bismillahir Rahmanir Rahim
     
// link    : https://dmoj.ca/problem/daacc1p3
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

bool check(vector<ll> &v, ll st, ll en, ll offset)
{
    // dbg(st); dbg(en); dbg(offset);
    ll m = (-st + en)/2;
    // dbg(m);
    forn(i,st,en)
    {
        // dbg(i); dbg(v[i]);
        v[i] -= offset;
        // dbg(v[i]);
        if(v[i] <= 0 || v[i] > 2*m) return false;
    }

    ll left = m, right = m + 1;
    forn(i,st,en)
    {
        if(v[i] <= m)
        {
            if(v[i] == left)
            {
                left--;
            }
            else return false;
        }
        else 
        {
            if(v[i] == right) right++;
            else return false;
        }
    }
    return true;
}
    
    
void Solve(ll test)
{
    // sliding window with greedy?

    ll n, m; cin >> n >> m;
    vector<ll> v(2*n*m);
    forn(i,0,2*n*m)
    {
        cin >> v[i];
    }

    ll offset = 0;
    for(ll st = 0; st < 2*n*m; st += 2*m)
    {
        if(!check(v,st,st+2*m,offset))
        {
            cout << "no" << NL;
            return;
        }
        offset += 2*m;
    }
    cout << "yes" << NL;
    return;

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