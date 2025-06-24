// Bismillahir rahmanir rahim

// https://vjudge.net/problem/CodeForces-1013B
// 

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
    ll n, x; cin >> n >> x;
    vector<ll> v(n), v1(n);

    map<ll,vector<ll>> mp, mp1;

    forn(i,0,n)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
        v1[i] = x & v[i];
        mp1[v1[i]].push_back(i);
    }

    ll ans = 3;

    for(auto [x,y] : mp)
    {
        if(y.size() >= 2)
        {
            cout << 0 << nl;
            return;
        }
        if(mp1[x].size() > 0)
        {
            map<ll,ll> mp2;
            for(auto pos : mp[x]) mp2[pos]++;
            for(auto pos : mp1[x]) mp2[pos]++;

            ll cnt = 0;
            for(auto [a,b] : mp2)
            {
                // cerr << a << " " << b << nl;
                cnt += (b == 1);
            }

            if(cnt > 1 || mp2.size() > 1)
            {
                ans = min(ans,1LL);
            }
            // dbg(cnt);
        }
    }

    if(ans == 1)
    {
        cout << 1 << nl;
        return;
    }

    for(auto [x,y] : mp1)
    {
        if(y.size() >= 2)
        {
            cout << 2 << nl;
            return;
        }
    }

    cout << -1 << nl;
    return;










    // map<ll,ll> mp, mp1;

    // forn(i,0,n)
    // {
    //     ll x; cin >> x; v.push_back(x);
    //     mp[x]++;
    //     if(mp[x] >= 2)
    //     {
    //         cout << 0 << nl;
    //         return;
    //     }
    // }

    // ll ans = 3;

    // forn(i,0,n)
    // {
    //     ll t = v[i] & x;
    //     dbg(t);
    //     // if(mp[t] > 0)
    //     // {
    //     //     cout << 1 << nl;
    //     //     return;
    //     // }
    //     // if(mp1[t] > 0)
    //     // {
    //     //     ans = min(ans,2LL);
    //     // }
    //     mp1[t]++;
    // }

    // if(ans == 2) cout << ans << nl;
    // else cout << -1 << nl;
    // return;

    // cout << -1 << nl;
    // return;



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