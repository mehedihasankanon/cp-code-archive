// Bismillahir rahmanir rahim

// https://codeforces.com/contest/2125/problem/B
// ac

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
    ll x, y, k; cin >> x >> y >> k;


    if(1)
    {
        ll g = gcd(x,y);
        if(x/g <= k && y/g <= k)
        {
            cout << 1 << nl;
            return;
        }
        else
        {
            cout << 2 << nl;
            return;
        }
    }
    else
    {
        cout << 2 << nl;
        return;
    }
    // else
    // {

    // }

    return;


    if(k >= x) 
    {
        if(k >= y) 
        {
            cout << 1 << nl;
            return;
        }
        else
        {
            cout << 2 << nl;
            return;
        }
    }
    else
    {
        if(k >= y)
        {
            cout << 2 << nl;
            return;
        }
        else
        {
            if(gcd(x,y) <= k)
            {
                cout << 1 << nl;
                return;
            }
            else
            {
                cout << 2 << nl;
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