// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/271/problem/B
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

const long long Pmax = 500000; vector<bool> prime(Pmax+10,true); vector<long long> primes; 

void sieve (void)
{
    prime[1] = false;
    
    primes.push_back(2);
    for(long long i = 4; i <= Pmax; i+=2) prime[i]=false;
    
    for(long long i = 3; i <= Pmax; i += 2)
    {
        if(prime[i]) 
        {
            for(long long j = i*i; j <= Pmax; j += i)
            {
                prime[j] = false;
            }
            primes.push_back(i);
        }
    }
}


void Pre(void)
{
    sieve();   
}   


ll diff(ll n)
{
    if(prime[n]) return 0;
    else if(n == 1) return 1;
    else 
    {
        ll l = 0, r = primes.size()-1, mid;
        while(r - l > 1)
        {
            mid = l + (r-l)/2;

            if(primes[mid] > n) r = mid;
            else l = mid;
        }
        // dbg(r);
        return primes[r]-n;
    }
}


    
    
void Solve(ll test)
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> nums(n), ans(n);

    forn(i,0,n)
    {
        nums[i].resize(m,0);
        ans[i].resize(m,0);
        forn(j,0,m)
        {
            cin >> nums[i][j];
            ans[i][j] = diff(nums[i][j]);            
            // dbg(nums[i][j]); dbg(ans[i][j]);

        }
    }

    ll a = INF;
    forn(i,0,n)
    {
        ll s = 0;
        forn(j,0,m) s += ans[i][j];
        // dbg(s);
        a = min(a,s);
    }
    forn(i,0,m)
    {
        ll s= 0;
        forn(j,0,n) s += ans[j][i];
        // dbg(s);
        a = min(a,s);
    }

    cout << a << NL;
    return;






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