// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/abc284/tasks/abc284_d
// AC

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("avx2")

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template<typename T>
// using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Extra functionality :
// os.find_by_order(index) => iterator to the element at that index (0-based)
// os.order_of_key(value) => number of elements strictly less than value

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

const long long Pmax = 5000000; vector<bool> prime(Pmax+10,true); vector<long long> primes; 

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

    return;
}   


void Solve(ll test)
{
    ll n; cin >> n;

    for(auto p1 : primes)
    {
        // if(n % p1 == 0)
        // {
        //     dbg(p1);
        //     ll v = (ll)round(sqrtl(n/p1));
        //     dbg(v);
        //     while(v * v< n / p1) v++;
        //     while(v * v> n / p1) v--;

        //     cout << v << " " << p1 << nl;
        //     return;
        // }

        if(n % p1 == 0)
        {
            if(n % (p1 * p1) == 0)
            {
                cout << p1 << " " << n / (p1 * p1) << nl;
                return;
            }
            else
            {
                dbg(p1);
                ll v = (ll)round(sqrtl(n/p1));
                dbg(v);
                while(v * v< n / p1) v++;
                while(v * v> n / p1) v--;

                cout << v << " " << p1 << nl;
                return;
            }
        }
    }
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