// Bismillahir Rahmanir Rahim
    
// link    : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B
// status  : ac
    
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
    
#define dbg(x)                  cerr << #x << " " << x << "\n"
#define nl                      "\n"
#define INF                     2e18
#define forn(i,s,e)             for(ll i = s; i < e; i++)
#define rforn(i,s,e)            for(ll i = s; i >= e; i--)
#define pb                      push_back
#define all(x)                  (x).begin(), (x).end()
    
ll testcase = 1;

void Pre(void){
    
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
        else ret.push_back(right[j++]);
        cmp++;
    }

    while(i < l) ret.push_back(left[i++]), cmp++;
    while(j < r) ret.push_back(right[j++]), cmp++;

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
    
    
void Solve(ll test){
    ll n; cin >> n;
    // vll v(n);
    v.resize(n);
    forn(i,0,n) cin >> v[i];

    cmp = 0;
    vll ans = merge_sort(0, n - 1);

    // forn(i,0,n - 1) cout << ans[i] << " ";

    // cout << ans[n - 1] << nl << cmp << nl;

    return;

    
}   
    
int main()
{   
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
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