// Bismillahir rahmanir rahim

// https://vjudge.net/problem/Gym-104333A#/
// AC

// had to consider that all possible permutations would be (n - 1)! times the 
// calculated value since when one pair is fixed, the others can be arranged (n - 1)! ways!!!

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
    ll n; cin >> n;

    vector<ll> a(n), b(n);

    forn(i,0,n) cin >> a[i];
    forn(i,0,n) cin >> b[i];

    vector<vector<ll>> cnta (35, vector<ll>(2,0)), cntb(35, vector<ll>(2,0));

    forn(bit,0,33)
    {
        forn(i,0,n)
        {
            cnta[bit][1 & (a[i] >> bit)]++;
            cntb[bit][1 & (b[i] >> bit)]++;
        }
    }

    ll ans = 0;
    forn(i,0,35)
    {
        ans += (((cnta[i][1] * cntb[i][0]) % mod + (cnta[i][0] * cntb[i][1]) % mod) * ((1 << i) % mod)) % mod;
        ans %= mod;
    }

    ll factorial = 1;
    forn(i,1,n)
    {
        factorial = (factorial * i) % mod;
    }
    ans = (ans * factorial) % mod;

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
        // dbgc(test);
        Solve(test);
    }
    return 0;
}