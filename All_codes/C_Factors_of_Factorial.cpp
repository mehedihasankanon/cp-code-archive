// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc052/tasks/arc067_a
// ac
    
#pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("avx2")
    
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

const long long Pmax = 1000; vector<bool> prime(Pmax+10,true); vector<long long> primes; 

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

// ll pwr(ll a, ll b)
// {
//     ll ans = 1;
//     while(b)
//     {
//         if(b & 1) ans = (ans * a) % mod;
//         a = (a * a) % mod;
//     }
//     return ans % mod;
// }


void Pre(void)
{
    sieve();
    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    vector<pair<ll,ll>> v;

    for(auto p : primes)
    {
        ll t = 0, p1 = p;
        while(n / p1 > 0)
        {
            t += n / p1; p1 *= p;
        }

        v.push_back({p,t});
    }

    ll ans = 1;

    for(auto [p, q] : v)
    {
        ans *= (q + 1);
        ans %= mod;
    }
    

    cout << ans << nl;
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