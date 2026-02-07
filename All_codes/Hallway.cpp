// // Bismillahir rahmanir rahim

// // https://www.infoarena.ro/problema/hallway
// // ok

// #pragma GCC optimize("O3,unroll-loops")

// #include <bits/stdc++.h>

// // #pragma GCC target("avx2")

// using namespace std;

// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// // using namespace __gnu_pbds;

// // template<typename T>
// // using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// // Extra functionality :
// // os.find_by_order(index) => iterator to the element at that index (0-based)
// // os.order_of_key(value) => number of elements strictly less than value

// using ll = long long;
// // using ll = int;
// using ld = long double;

// ll mod = 1000000007;
// // ll mod = 998244353;

// #define nl "\n"
// #define forn(i,s,e) for(ll i = s; i < e; i++)
// #define forr(i,s,e) for(ll i = s; i >= e; i--)


// // #define DEBUG

// #ifdef DEBUG
// #define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
// #define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
// #define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
// #else
// #define dbg(n) // single variable, string
// #define dbgc(a) // vector, deque, array
// #define dbgcc(a) // map, vector<pll>
// #endif

// ll testcase = 1;

// void Pre(void)
// {

//     return;
// }

// bool ok(vector<pair<ld,ld>> &v, ll n, ll m, ll k, ld mid)
// {
//     ld d = mid * 2.0, d2 = (mid * 2.0) * (mid * 2.0);

//     vector<bool> vis(k, false);

//     queue<ll> q;
//     forn(i,0,k)
//     {
//         if(v[i].second < d)
//         {
//             vis[i] = 1;
//             q.push(i);
//         }
//     }

//     auto dis = [&](pair<ld,ld> &a, pair<ld,ld> &b) {
//         return pow(a.first - b.first,2) + pow(a.second - b.second, 2);
//     };

//     while(!q.empty())
//     {
//         ll cur = q.front();
//         q.pop();

//         if(m - v[cur].second)
//         {
//             return false;
//         }

//         forn(i,0,k)
//         {
//             if((!vis[i]) and dis(v[i], v[cur]) < d2)
//             {
//                 vis[i] = 1;
//                 q.push(i);
//             }
//         }
//     }

//     return true;
// }


// void Solve(ll test)
// {
//     ll n, m, k; cin >> n >> m >> k;

//     vector<pair<ld,ld>> v(k); 
//     forn(i,0,k)
//     {
//         cin >> v[i].first >> v[i].second; // {x,y} format
//     }

//     ld lo = 0, hi = m/2.0;

//     forn(i,0,101)
//     {
//         ld mid = (lo + hi) / 2.0;

//         if(ok(v,n,m,k, mid))
//         {
//             lo = mid;
//         }
//         else
//         {
//             hi = mid;
//         }
//     }

//     cout << setprecision(10) << fixed << lo << nl;
// }

// int main()
// {   
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); cout.tie(nullptr);
//     Pre();
    
//     // cin >> testcase;
    
//     ll test;
//     for(test = 1; test <= testcase; test++) {
//         // dbgc(test);
//         Solve(test);
//     }
//     return 0;
// }


// converted to old C++
#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <iomanip>
#include <cstdio>

using namespace std;

typedef long long ll;
typedef double ld;

ld get_dist_sq(const pair<ld,ld>& a, const pair<ld,ld>& b) {
    ld dx = a.first - b.first;
    ld dy = a.second - b.second;
    return dx*dx + dy*dy;
}

bool ok(const vector<pair<ld,ld> > &v, ll n, ll m, ll k, ld mid)
{
    ld d = mid * 2.0;
    ld d2 = d * d;
    
    vector<bool> vis(k, false);
    queue<int> q;


    for(int i = 0; i < k; ++i)
    {
        if(v[i].second < d)
        {
            vis[i] = true;
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        if(m - v[cur].second < d) 
        {
            return false;
        }

        for(int i = 0; i < k; ++i)
        {
            if(!vis[i])
            {
                if (get_dist_sq(v[i], v[cur]) < d2) {
                    vis[i] = true;
                    q.push(i);
                }
            }
        }
    }

    return true;
}

void Solve()
{
    ll n, m, k; 
    if (!(cin >> n >> m >> k)) return;

    vector<pair<ld,ld> > v(k); 
    for(int i = 0; i < k; ++i)
    {
        cin >> v[i].first >> v[i].second; 
    }

    ld lo = 0.0, hi = m / 2.0;

    for(int i = 0; i < 60; ++i)
    {
        ld mid = (lo + hi) * 0.5;

        if(ok(v, n, m, k, mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }

    cout << fixed << setprecision(8) << lo << "\n";
}

int main()
{   
    freopen("hallway.in", "r", stdin);
    freopen("hallway.out", "w", stdout);

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    Solve();
    
    return 0;
}