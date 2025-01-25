// Bismillahir Rahmanir Rahim
     
// link    : https://vjudge.net/problem/SPOJ-INVCNT
// status  : ac
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
using ld = long double;
using vll = vector<ll>;
    
ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;
    
#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
    
ll testcase = 1;

void Pre(void)
{
    
    
    
    return;
}   

ll cmp = 0;
vll merge(vll &left, vll &right)
{
    ll l = left.size(), r = right.size();
    ll i = 0, j = 0;
    vll ret;
    while(i < l && j < r)
    {
        if(left[i] < right[j]) ret.push_back(left[i++]);
        // implementation was kinda wrong here
        else ret.push_back(right[j++]),cmp += l - i;
        // cmp++;
    }

    while(i < l) ret.push_back(left[i++]), cmp += 0;
    while(j < r) ret.push_back(right[j++]);

    return ret;
}


vll v;

vll merge_sort(ll st, ll en)
{
    if(st == en) return {v[st]};

    ll mid = (st + en) >> 1;

    vll left = merge_sort(st, mid), right = merge_sort(mid + 1, en);

    return merge(left, right);
    

}
    
    
void Solve(ll test)
{
    
    ll n; cin >> n;
    // vll v(n);
    v.resize(n);
    forn(i,0,n) cin >> v[i];
    cmp = 0;

    merge_sort(0, n - 1);

    // forn(i,0,n - 1) cout << ans[i] << " ";

    // cout << ans[n - 1] << nl << cmp << nl;
    cout << "Case " << test << ": " << cmp << NL;
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
        Solve(test);
    }
    return 0;
}   