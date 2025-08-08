// Bismillahir rahmanir rahim

// https://vjudge.net/problem/Kattis-ballotboxes
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


void Solve(ll n, ll b)
{
    typedef struct {
        ll count;
        ll allotted;
        // ll position;
    } item;

    vector<item> v(n);
    b -= n;
    // forn(i,0,n)
    // {
    //     v[i].allotted = 1;
    //     cin >> v[i].count;
    //     v[i].position = i;
    // }

    auto cmp = [](const item& a, const item& b) {
        // Priority: highest citizens per box first
        ll pa = (a.count + a.allotted - 1) / a.allotted;
        ll pb = (b.count + b.allotted - 1) / b.allotted;
        // if (pa == pb) return a.position > b.position; // tie-breaker: lower index first
        return pa < pb; // max-heap: highest priority on top
    };
    priority_queue<item, vector<item>, decltype(cmp)> pq(cmp);

    // for (auto& it : v) pq.push(it);
    forn(i,0,n)
    {
        item t; 
        cin >> t.count;
        t.allotted = 1;
        // t.position = i;

        pq.push(t);
    }

    while(b)
    {
        item tp = pq.top();
        pq.pop();

        tp.allotted++;
        pq.push(tp);
        b--;
    }

    item a = pq.top();
    cout << (a.count + a.allotted - 1) / a.allotted << nl;
    return;

    

}

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    // ll test;
    // for(test = 1; test <= testcase; test++) {
    //     Solve(test);
    // }

    ll n, b; cin >> n >> b;
    while(n != -1 && b != -1)
    {
        Solve(n,b);
        cin >> n >> b;
    }
    return 0;
}