// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/CodeForces-762A
// status  : wa wa tle ac
     
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

const long long Pmax = 1000000; 
vector<bool> prime(Pmax+10,true); vector<ll> primes;

void sieve (void)
{
    prime[1]=false;
    prime[2]=true;
    primes.push_back(2);
    for(ll i = 4; i <= Pmax; i+=2) prime[(int)i] = true;

    for(ll i = 3; i <=Pmax; i+= 2)
    {
        if(prime[i])
        {
            for(ll j = i*i; j <=Pmax; j += i) prime[(int)j]=false;
            primes.push_back(i);
        }
    }

}


void Solve(ll test)
{   
    /*ll n, k;
    cin >> n >> k;
    

    // came close. need more combi knowledge and prossibly a bit of other knowledge to find 
    // k-th minimum for the case divcnt > k


    ll need = n;
    ll divcnt = 1;
    vector<ll> cnts;
    for(auto p : primes)
    {
        if(p > need) break;
        ll c = 1;
        while(n%p==0) c++,n/=p;
        forn(i,0,c-1) cnts.push_back(p);
        divcnt*=c;

        // 
        // if(divcnt >= k)
        // {
        //     k--;
        //         ll ans = 1;
        //     for(auto [u,v]:cnts)
        //     {   
        //         dbg(u); dbg(v);
        //         if(k <= v)
        //         {
        //             forn(i,0,k) ans*=u;
        //             cout << ans << nl;
        //             return;
        //         }
        //         else 
        //         {
        //             forn(i,0,v) ans*=u;
        //             //dbg(ans);
        //             k-=v;
        //         }
        //     }
        // }
    }
    if(divcnt < k)
    {
        cout << -1 << nl; return;
    }
    else if(divcnt == k)
    {
        cout << need << nl;
        return;
    }
    else
    {
        // wrong answer lies here :))
        
        // ll ans = need;
        // // dbg(divcnt);
        // auto it = cnts.begin();
        // forn(i,0,divcnt-k) {ans/=*(it); ++it;}
        // cout << ans << nl;
        // return;


        // very efficient, and correct, until a lot of factors come in-like 1000000000000000
        // also the sieve was made to calculate up to about 10^12 so 10^15 would give wrong ans
        // vll divs; unordered_map<ll,bool> mp;
        // ll sz = cnts.size();
        // forn(i,0,(1<<sz))
        // {
        //     ll div = 1;
        //     forn(j,0,sz)
        //     {
        //         if(i&(1<<j)) div*=cnts[j];
        //     }
        //     if(!mp[div]) {divs.push_back(div); mp[div]=true;}
        //     // dbg(div);
        // }
        // sort(divs.begin(),divs.end());
        // cout << divs[k-1] << nl;
        // return;
    }*/
    

    ll n, k; cin >> n >>k;
    vll divs;
    divs.push_back(1); if(n > 1) divs.push_back(n); // forgot edge case n = 1
    for(ll i = 2; i*i <= n; i++)
    {
        if(n%i==0)
        {
            divs.push_back(i); if(i != n/i) divs.push_back(n/i); // forgot case n is a perfect sqr
        }
    }
    sort(divs.begin(),divs.end());
    if(divs.size() < k) cout << -1 << nl;
    else cout << divs[k-1] << nl;
    return;
}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    // sieve();
    
    //cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   