// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/LightOJ-1090
// AC
    
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

// const long long Pmax = 1000000; vector<bool> prime(Pmax+10,true); vector<long long> primes; 

// void sieve (void)
// {
//     prime[1] = false;
    
//     primes.push_back(2);
//     for(long long i = 4; i <= Pmax; i+=2) prime[i]=false;
    
//     for(long long i = 3; i <= Pmax; i += 2)
//     {
//         if(prime[i]) 
//         {
//             for(long long j = i*i; j <= Pmax; j += i)
//             {
//                 prime[j] = false;
//             }
//             primes.push_back(i);
//         }
//     }

// }

// vector<map<ll,ll>> facts(1e6+1);

void Pre(void)
{

    // sieve();

    // forn(i,2,1e6+1)
    // {
    //     for(auto )
    // }
    
    return;
}   

ll mx(ll b, ll t)
{
    ll ans = 0, t1 = t;
    while(b / t1)
    {
        ans += b /t1;
        t1 *= t; 
    }
    return ans;
}

ll mx1(ll b, ll t)
{
    ll ans = 0;
    while(b % t == 0)
    {
        ans++; b/=t;
    }
    return ans;
}
    
    
void Solve(ll test)
{
    ll n,r,p,q; cin >> n >> r >> p >> q;
    
    cout << "Case " << test << ": ";

    ll p2 = mx(n,2) - mx(n - r,2) - mx(r,2) + q * mx1(p,2), p5 = mx(n,5) - mx(n - r,5) - mx(r,5) + q * mx1(p,5);

    cout << min(p2,p5) << nl;
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