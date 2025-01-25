// Bismillahir Rahmanir Rahim
     

// link    : https://codeforces.com/contest/1594/problem/C
// status  : wa wa ac
     
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

const long long Pmax = 1000000; vector<bool> prime(Pmax+10,true); vector<long long> primes; 

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


    
    
void Solve(ll test)
{   
    ll n; char ch; cin >> n >> ch;
    string s;
    cin >> s;

    ll mx = 0;
    bool done = true;
    forn(i,0,n)
    {
        if(s[i] !=ch) {done = false;}
        if(s[i] == ch) mx = i+1; 
    }
    if(done) 
    {
        cout << 0 << nl;
        return;
    }

    // this is wrong
    // if(s[2]==ch)
    // {
    //     cout << 1 << nl << 3 << nl;
    //     return;
    // }
    // else 
    // {
    //     if(s[1]==ch) cout << 1 << nl << 2 << nl;
    //     else cout << 2 << nl << 3 << " " << 2 << nl;
    //     return;
    // }

    if(s.back()==ch) 
    {
        cout << 1 << nl << n << nl;
        return; 
    }
    else 
    {
        if(s[n-2]==ch)
        {
        cout << 1 << nl << n-1 << nl;
        return;

        }
        // this case i forgot to consider
        else if(2*mx > n) 
        {
            cout << 1 << nl << mx << nl;
            return;
        }
        cout << 2 << nl << n << " " << n-1 << nl;
        return; 
    }

}   
    
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    // sieve();
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}   