// Bismillahir rahmanir rahim

// https://codeforces.com/contest/2208/problem/B
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
    ll n, k, p ,m; cin >> n >> k >> p >> m;

    p--;

    vector<pair<ll,ll>> v;

    forn(i,0,n)
    {
        ll x; cin >> x;
        v.push_back({x, i});
    }

    auto cmp = [p](const pair<ll,ll>& a, const pair<ll,ll>& b) {
        if (a.second == p && b.second != p) return false; 
        if (b.second == p && a.second != p) return true;  
        return a.first > b.first; 
    };

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, decltype(cmp)> pq(cmp);
    
    forn(i,0,k)
    {
        pq.push(v[i]);
    }

    queue<pair<ll,ll>> q;

    forn(i,k,n)
    {
        q.push(v[i]);
    }

    ll cost = 0;
    ll ans = 0;
    while(true)
    {
        if(cost + pq.top().first <= m)
        {
            auto t = pq.top();
            pq.pop();
            dbg(t.second);
            cost += t.first;
            if(t.second == p)
            {
                ans++;
            }
            q.push(t);
            pq.push(q.front());
            q.pop();
        }
        else
        {
            break;
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
        dbg(test);
        Solve(test);
    }
    return 0;
}