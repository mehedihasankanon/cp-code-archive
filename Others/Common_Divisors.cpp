// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/CodeForces-1203C
// status  : ac // had a bug 
     
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

const long long Pmax = 1000000; vector<bool> prime(Pmax+10,true); vll primes;
void sieve(void)
{
    prime[1] = false;
    primes.push_back(2);
    for(ll i = 4; i <=Pmax; i+=2) prime[i]=false;
    for(ll i = 3; i <=Pmax;i+=2)
    {
        if(prime[i])
        {
            primes.push_back(i);
            for(ll j = i*i; j <= Pmax; j+=i) prime[j] = false;
        }
    }
    return;
}

void Solve(ll test)
{   
    ll n; cin >> n;
    vll v(n); cin >> v[0]; ll g=v[0];
    forn(i,1,n)
    {
        cin >> v[i]; g = gcd(v[i],g);
    }

    //dbg(g);
    ll cnt = 1;
    for(auto p : primes)
    {
        //dbg(p);
        if(p*p > g) break;
        ll d1 = 1;
        while(g%p==0) d1++,g/=p;
        cnt*=d1;
    }
    if(g != 1) cnt*=2;
    cout << cnt << nl;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    sieve();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   