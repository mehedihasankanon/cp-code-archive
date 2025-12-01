// Bismillahir rahmanir rahim

// https://codeforces.com/contest/439/problem/D
// eida kuno kotha?!!

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

ll cost(ll guess, vector<ll> &a, vector<ll> &b)
{
    ll ans = 0, i = 0, j = 0;

    while(i < a.size() and a[i] < guess)
    {
        ans += guess - a[i++];
    }
    while(j < b.size() and b[j] > guess)
    {
        ans += b[j++] - guess;
    }
    return ans;
}


void Solve(ll test)
{
    ll n1, n2; cin >> n1 >> n2;
    vector<ll> a(n1), b(n2);

    ll lo = 1e10, hi = -11;


    forn(i,0,n1) cin >> a[i], lo = min(a[i], lo);
    forn(i, 0, n2) cin >> b[i], hi = max(b[i], hi);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater());

    if(hi <= lo)
    {
        cout << 0 << nl;
        return;
    }

    while(hi - lo > 3)
    {
        ll m1 = lo + (hi - lo) / 3;
        ll m2 = hi - (hi - lo) / 3;

        if(cost(m1, a, b) < cost(m2, a, b))
        {
            hi = m2;
        }
        else
        {
            lo = m1;
        
        }

        dbg(hi);
        dbg(lo);
    }
    

    ll ans = 2e18;
    forn(i, lo, hi+1)
    {
        ans = min(ans, cost(i,a,b));
        dbg(ans);
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