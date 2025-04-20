// Bismillahir rahmanir rahim
    
// https://codeforces.com/contest/701/problem/C
// WA*4, AC

// merciless test casing
// nice problem

    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
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
    ll n; cin >> n;
    string s; cin >> s;
    unordered_set<char> al;
    for(auto ch : s) al.insert(ch);

    ll l = 0, r = n;
    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        dbg(mid);

        set<char> s1;
        map<char,ll> mp;
        forn(i,0,mid) s1.insert(s[i]), mp[s[i]]++;
        if(s1.size() == al.size())
        {
            r = mid;
            continue;
        }
        bool fl = false;
        forn(i,mid,n)
        {
            mp[s[i - mid]]--;
            if(!mp[s[i-mid]]) s1.erase(s[i - mid]);
            s1.insert(s[i]); mp[s[i]]++;

            dbgc(s1);
            if(s1.size() == al.size())
            {
                r = mid;
                fl = true;
                continue;
            }
        }
        if(!fl) l = mid;
    }

    cout << r << nl;
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