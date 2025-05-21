// Bismillahir Rahmanir Rahim
     
// link    : https://codeforces.com/contest/276/problem/B
// status  : WA AC
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;
    
#define DBG(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void) {
    
}   
    
    
void Solve(ll test) {
    string s; cin >> s;
    vector<ll> cnt(26,0);
    for(auto c : s) cnt[c-'a']++;
    // forn(i,0,26) {
    //     if(cnt[i]) {
    //         DBG(i); DBG(cnt[i]);
    //     }
    // }

    bool ans = true;
    forn(j,0,s.size()+1) {
        bool pal = true;
        ll c1 = 0, c0 = 0;
        forn(i,0,26) {
            // DBG(cnt[i]);
            if(cnt[i] != 0) {
                if(cnt[i]&1) c1++;
                else c0++;

                if(c1 > 1) {
                    pal = false;
                    break;
                }
            }
        }
        if(pal) {
            if(ans) cout << "First" << NL;
            else cout << "Second" << NL;
            return;
        }
        // cerr << NL;


        bool allodd = true;
        forn(i,0,26) {
            if(cnt[i] != 0 && cnt[i]%2==0) {
                // DBG(i); DBG(cnt[i]);
                cnt[i]--;
                ans = 1-ans;
                allodd = false;
                break;
            } 
        }


        // forgot this part and got WA :)
        if(allodd) {
            ll mx = 1, mxi;
            forn(i,0,26) {
                if(cnt[i] == 1) {
                    mxi = i;
                }
            }
            forn(i,0,26) {
                if(cnt[i] > mx) {
                    mxi = i;
                    mx = cnt[i];
                }
            }
            cnt[mxi]--;
            ans = 1- ans;
        }
        
        // cerr << NL;
    }
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