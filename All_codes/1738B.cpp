// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/1738/problem/B
// status  : 
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void)
{   
    
}   
    
    
void Solve(ll test)
{   
    ll n, k;
    cin >> n >> k;
    if(n==k)
    {
        vll v(k), nums(k);
        forn(i,0,k)
        {
            cin >> v[i];
            if(i==0) nums[i]=v[i];
            else nums[i]=v[i]-v[i-1];
        }
        forn(i,1,k)
        {
            if(nums[i]<nums[i-1])
            {
                cout << "No" << nl;
                return;
            }
        }
        cout << "Yes" << nl;
        return;
    }
    vll v(k), nums(k);
    bool poss = true;
    forn(i,0,k) 
    {
        cin >> v[i];
        if(i==0) nums[i]=v[i];
        else nums[i] = v[i]-v[i-1];
    }
    forn(i,2,k) if(nums[i]<nums[i-1]) {poss= false; break;}

    if(!poss)
    {
        cout << "No" << nl; return;
    }
    else
    {
        // dbg(nums[1]);
        if(k > 1 and nums[0] > (n-k)*nums[1]) cout << "No" << nl;
        else cout << "Yes" << nl;
        return;
    }

}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   
