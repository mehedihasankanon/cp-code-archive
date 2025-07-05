// Bismillahir rahmanir rahim

// https://atcoder.jp/contests/abc413/tasks/abc413_d
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

void Pre(void)
{

    return;
}   

bool comp(ll a, ll b)
{
    return abs(a) < abs(b);
}


void Solve(ll test)
{
    ll n; cin >> n;
    vector<ll> v(n);

    forn(i,0,n) cin >> v[i];

    if(n == 2)
    {
        cout << "Yes" << nl;
        return;
    }

    sort(v.begin(), v.end(), comp);

    bool fl1 = 1, fl2 = 1;
    forn(i,1,n-1)
    {
        if(v[i - 1] * v[i + 1] != v[i] * v[i]) 
        {
           fl1 = 0;
           break;
        }
    }

    sort(v.begin(),v.end());
    forn(i,1,n-1)
    {
        if(v[i - 1] * v[i + 1] != v[i] * v[i]) 
        {
           fl2 = 0;
           break;
        }
    }

    bool fl3 = 1;
    ll t = abs(v[0]);
    forn(i,1,n)
    {
        if(t != abs(v[i])) 
        {
            fl3 = 0;
            break;
        }
    }

    if(fl3)
    {
        vector<ll> v1;
        vector<ll> v2;
        forn(i,0,n)
        {
            if(v[i] == t) v1.push_back(v[i]);
            else v2.push_back(v[i]);
        }

        if((v1.size() != n / 2 && v1.size() != n/2 + 1) || (v2.size() != n / 2 && v2.size() != n/2 + 1))
        {
            fl3 = 0;
        }
    }

    if(fl1 || fl2 || fl3) cout << "Yes" << nl;
    else cout << "No" << nl;

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