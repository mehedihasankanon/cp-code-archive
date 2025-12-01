// Bismillahir rahmanir rahim

// https://codeforces.com/gym/101309/problem/D
// Ok

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

vector<ld> x, y, z;

ld diff(ld test_height)
{
    ld rm = 0;

    forn(i,0,x.size())
    {
        ld r1 = hypot(x[i], y[i]);
        ld r = r1 * test_height / (test_height - z[i]);
        rm = max(r,rm);
    }
    
    return rm * rm * test_height;
}


void Solve(ll test)
{
    ll n; cin >> n;
    x.resize(n), y.resize(n), z.resize(n);

    ld max_r = 0.0, z1 = 0, max_z = 0;
    forn(i,0,n)
    {
        cin >> x[i] >> y[i] >> z[i];
        if(max_r < hypot(x[i], y[i]))
        {
            max_r = hypot(x[i], y[i]);
            z1 = z[i];
        }
        max_z = max(max_z, z[i]);
    }

    ld hi = 2e16, lo = max_z + 1e-6;
    forn(i,0,200)
    {
        ld m1 = lo + (hi - lo)/3.0;
        ld m2 = hi - (hi - lo)/3.0;

        if(diff(m1) < diff(m2))
        {
            hi = m2;
        }
        else
        {
            lo = m1;
        }
    }

    lo = .5 * (lo + hi);

    cout << setprecision(3) << fixed << lo << " " << sqrt(diff(lo)/lo) << nl;
    return;

}

int main()
{   

    freopen("dome.in", "r", stdin);
    freopen("dome.out", "w", stdout);

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