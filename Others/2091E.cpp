// Bismillahir rahmanir rahim
    
// 
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
// using ll = long long;
using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
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

#define mx 10000010

vector<bool> prime(mx,true);
vector<ll> cnt(mx,0);
// vector<ll> primes;

void Pre(void)
{
    for(ll i = 4; i <mx; i+=2)
    {
        prime[i] = false;
    }

    for(ll i = 3; i < mx; i+=2)
    {
        if(prime[i])
        {
            for(ll j = i * 2; j < mx; j += i)
            {
                prime[j] = false;
            }
        }
        // primes.push_back(i);
    }
    ll curr = 0;
    forn(i,2,mx)
    {
        if(prime[i]) curr++;
        cnt[i] = curr;
    }

    
    return;
}   
    
    
void Solve(ll test)
{
    ll n; cin >> n;
    ll ans = 0;
    forn(i,1,n+1)
    {
        // dbg(cnt[n/i]);
        ans += cnt[n/i];
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
        Solve(test);
    }
    return 0;
}   