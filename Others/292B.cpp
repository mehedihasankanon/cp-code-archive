// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/292/problem/B
// status  : AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef pair<double,double>     pdd;
typedef vector<ll>              vll;
typedef vector<int>             vint;
    
ll M = 1000000007;
ll MOD = 998244353;
ld eps = 1e-12;
    
#define DBG(x)                  cerr << #x << " " << x << "\n"
#define NL                      "\n"
#define INF                     2e18
#define F0R(i,s,e)              for(ll i = s; i < e; i++)
#define F0RR(i,s,e)             for(ll i = s; i >= e; i--)
#define PB                      push_back
#define ALL(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    ll ve, e; cin >> ve >> e;
    map<ll,ll> ord;
    
    F0R(i,0,e) {
        ll ui, vi; cin >> ui >> vi;
        ord[ui]++; ord[vi]++;
        // DBG(ui);        DBG(ord[ui]); DBG(vi); DBG(ord[vi]);
    }

    vector<ll> ords;
    for(auto [x,y] : ord) {
        ords.push_back(y);
    }

    ll v = ords.size();
    sort(ALL(ords));

    if(ords[0] > 2) {
        cout << "unknown topology" << NL;
        return;
    }
    
    // if(ords[0]==1) {
    //     if(ords[1]==1) {
    //         // star
    //         if(ords[2] != 1) {
    //             F0R(i,3,v-1) {
    //                 if(ords[i]!=1) {
    //                     cout << "unknown topology" << NL;
    //                 }
    //             }
    //             if(ords[v-1]==v-1) {
    //                 cout << "star topology\n";
    //                 return;
    //             } else {
    //                 cout << "unknown topology\n";
    //                 return;
    //             }
    //         } else {
    //             F0R(i,2,v) {
    //                 if(ords[i] != 2) {
    //                     cout << "unknown topology\n";
    //                     return;
    //                 }
    //             }
    //             cout << "bus topology\n";
    //             return;
    //         }  
    //     } 
    // }

    // for(auto x : ords) DBG(x);

    if(ords[0] == 1 && ords[1] == 1) {
        // bus or star
        if(ords[2] == 2) {
            // possible bus
            for(ll i = 3; i < v; i++) {
                if(ords[i] != 2) {
                    // not bus
                    cout << "unknown topology\n";
                    return;
                }
            }
            // bus
            cout << "bus topology\n";
            return;
        } else if(ords[2] == 1) { 
            // possible star
            if(ords[v-1] == ve-1) {
                // possible star
                for(ll i = 3; i < v-1; i++) {
                    if(ords[i] != 1) {
                        cout << "unknown topology\n";
                        return;
                    }
                }
                cout << "star topology\n";
                return;
            }
            // not star coz highest order isnt ve - 1 
            cout << "unknown topology\n";
            return;
        }
    }


    F0R(i,0,v) {
        // DBG(ords[i]);
        if(ords[i] != 2) {
            cout << "unknown topology\n";
            return;
        }
    }

    cout << "ring topology\n";
    return;




}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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