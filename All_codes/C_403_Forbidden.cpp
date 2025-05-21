// Bismillahir rahmanir rahim
    
// https://atcoder.jp/contests/abc403/tasks/abc403_c
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
#pragma GCC target("avx2")
    
using namespace std;
    
// using ll = long long;
using ll = int;
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
    ll n, m, q; cin >> n >> m >> q;
    // map<ll,set<ll>> mp;
    // using map gives us tle because of the larger logarithmic complexity overhead 
    // of accessing the elements
    // i guess i was worried for nothing about the MLE in the vector<set> :(
    vector<set<ll>> mp(n + 1);
    vector<bool> ord(n + 1, 0), all(n+1,0);

    forn(i,0,q)
    {
        ll tp; cin >> tp;
        if(tp == 1)
        {
            ll x, y; cin >> x >> y;
            mp[x].insert(y);
            ord[x] = false;
        }
        else if(tp == 2)
        {
            ll x; cin >> x;
            all[x] = true;
        }
        else
        {
            ll x, y; cin >> x >>y;

            if(all[x])
            {
                cout << "Yes" << nl;
                continue;
            }

            // if(!ord[x])
            // {
            //     sort(mp[x].begin(),mp[x].end());
            //     ord[x] = true;
            // }



            // if(binary_search(mp[x].begin(),mp[x].end(),y))

            // .contains() is far more efficient in set<> data structure because
            // set doesnt have random access operator, so BS is O(n)
            // but contains() is O(log n)

            // is unrordered_set, contains is O(1) !!!!
            if(mp[x].contains(y))
            {
                cout << "Yes" << nl;
            }
            else
            {
                cout << "No" << nl;
            }
        }
    }
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