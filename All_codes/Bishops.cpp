// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/LightOJ-1202
// ac
    
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
    
    
void Solve(ll test)
{
    ll r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;


    if(r1 - c1 == r2 - c2 || r1 + c1 == r2 + c2)
    {
        cout << "Case " << test << ": " << 1 << nl;
        return;
    }

    if((r1 + c1 - 2*(min(r1,c1))) % 2 == (r2 + c2 - 2*(min(r2,c2))) % 2)
    {
        cout << "Case " << test << ": " << 2 << nl;
        return;
    }




    // ll m1 = min(r1, c1); //r1 -= m1; c1 -= m1;
    // ll m2 = min(r2, c2); //r2 -= m2; c2 -= m2;

    // dbg(r1); dbg(c1);
    // dbg(r2); dbg(c2);
    // if(r1 - m1 == r2 - m2 && c1 - m1 == c2 - m2)
    // {
    //     cout << "Case " << test << ": " << 1 << nl;
    //     return;
    // }
    // if(((r1 + c1) % 2) == ((r2 + c2) % 2))
    // {
    //     cout << "Case " << test << ": " << 2 << nl;
    //     return;
    // }
    
    cout << "Case " << test << ": " << "impossible" << nl;
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