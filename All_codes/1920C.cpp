// Bismillahir rahmanir rahim

// https://codeforces.com/contest/1920/problem/C
// ok

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

void Pre(void)
{

    return;
}


void Solve(ll test)
{
    dbg(test);
    ll n; cin >> n;

    vector<ll> v(n);
    forn(i,0,n) cin >> v[i];

    if(n == 1)
    {
        cout << 1 << nl;
        return;
    }

    vector<ll> factors = {1};

    ll i = 0;
    for(i = 2; i * i < n; i++)
    {
        if(n % i == 0)
        {
            factors.push_back(i);
            factors.push_back(n/i);
        }
    }
    
    if(i * i == n)
    {
        factors.push_back(i);
    }

    // sort(factors.begin(), factors.end());


    ll ans = 1;
    for(auto k : factors)
    {
        vector<ll> gcds;
        forn(bi,0,k)
        {
            ll g = 0;
            forn(b,0,n/k-1)
            {   
                g = gcd(g, abs(v[b * k + bi] - v[(b + 1) * k + bi]));
            }
            gcds.push_back(g);
        }



        dbgc(gcds);
        ll g1 = gcds.front();
        forn(i,1,(ll)gcds.size())
        {
            g1 = gcd(g1, gcds[i]);
        }

        if(g1 != 1)
        {
            ans++;
        }
    }

    cout << ans << nl;
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
        // dbgc(test);
        Solve(test);
    }
    return 0;
}