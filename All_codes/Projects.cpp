// Bismillahir rahmanir rahim

// https://cses.fi/problemset/task/1140
// editorial

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

typedef struct Task
{

    ll start, end, profit;

    Task(ll a, ll b, ll c)
    {
        start = a, end = b, profit = c;
    }

    bool operator<(const Task &a) const { 
        if (end < a.end) return true;
        else if(end > a.end) return false;
        else return profit < a.profit;
    }
} Task;


void Solve(ll test)
{
    ll n; cin >> n;

    vector<Task *> v(n);
    
    forn(i,0,n)
    {
        ll a, b, p;
        cin >> a >> b >> p;

        v[i] = new Task(a,b,p);
    }

    sort(v.begin(), v.end(), [](const Task* a, const Task* b) {
        return a->end < b->end;
    });


    map<ll,ll> dp = {{0,0}}; // map<end_time, max_profit>

    for(Task *job : v)
    {
        // find the last job that ends before the current job starts
        // dbg((job->end));
        // dbg(prev(dp.upper_bound(job->start))->first);
        // dbg(prev(dp.upper_bound(job->start))->second);
        // ll cur = prev(dp.upper_bound(job->start))->second + job->profit;

        auto mx = prev(dp.upper_bound(job->start));
        // sometimes the previous non-conflicting job ending might overlap with the
        // current job starting time
        // in this case we have to return to the previous job
        if(mx->first >= job->start) mx = prev(mx);

        ll cur = mx->second + job->profit;

        if(cur > dp.rbegin()->second)
        {
            dp[job->end] = cur;
        }
    }

    cout << dp.rbegin()->second << nl;

    dbgcc(dp);




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