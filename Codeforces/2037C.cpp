// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/2037/problem/C
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


const long long Pmax = 1000000; vector<bool> prime(Pmax+10,true); //vector<long long> primes; 

void sieve (void)
{
    prime[1] = false;
    
    // primes.push_back(2);
    for(long long i = 4; i <= Pmax; i+=2) prime[i]=false;
    
    for(long long i = 3; i <= Pmax; i += 2)
    {
        if(prime[i]) 
        {
            for(long long j = i*i; j <= Pmax; j += i)
            {
                prime[j] = false;
            }
            // primes.push_back(i);
        }
    }

}


void Pre(void)
{
    sieve();
    
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    

    if(n <= 4)
    {
        cout << "-1" << NL;     
        return;
    }
    else
    {
        ll x = 1;
        while(x <= n) {cout << x << " "; x += 2;}

        x = 2;
        ll x1 = 0;

        while(x <= n && prime[n - (!(n&1)) + x]) x += 2;
        x1 = x;
        cout << x1 << " ";

        x = 2;
        while(x <= n)
        {
            if(x != x1) {cout << x << " ";}
            x += 2;
        }
        cout << NL;
        return;
    }
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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