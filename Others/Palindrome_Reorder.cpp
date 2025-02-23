// Bismillahir rahmanir rahim
    
// https://cses.fi/problemset/task/1755
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define debug(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define debugc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define debugcc(a) cout<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define debug(n) // single variable, string
#define debugc(a) // vector, deque, array
#define debugcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    string s; cin >> s;
    ll n = s.size();
    string t;
    t.resize(n,'\0');

    // sort(s.begin(),s.end());
    ll cnt[26] = {0};

    ll c1 = 0, idx = 0;
    for(auto c : s) cnt[c - 'A']++;
    forn(i,0,26) 
    {
        if(cnt[i] & 1) 
        {
            idx = i;
            c1++;
        }
    }

    if(c1 > 1)
    {
        cout << "NO SOLUTION" << nl;
        return;
    }

    if(n & 1) t[n/2] = 'A' + idx,cnt[idx]--;

    ll hi = n - 1, lo = 0;
    forn(i,0,26)
    {
        while(cnt[i])
        {
            t[hi--] = 'A' + i;
            t[lo++] = 'A' + i;
            cnt[i] -= 2;
        }
    }

    cout << t << nl;
    return;



    
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