// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/SPOJ-NFACTOR
// ac
    
// #pragma GCC optimize("O3,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("avx2")
    
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

vector<ll> primes;
vector<char> prime(1e6 + 10,  1);
vector<ll> fcnt(1e6+5,0);
vector<vector<ll>> cnt(11,vector<ll>(1e6+5,0));

void Pre(void)
{
    primes.push_back(2);
    for(ll i = 4; i <= 1e6+2; i+= 2)
    {
        prime[i] = 0;
    }

    for(ll i = 3; i <= 1e6+2; i += 2)
    {
        if(prime[i])
        {
            primes.push_back(i);
            for(ll j = i * i; j <= 1e6+2; j += i)
            {
                prime[j] = 0;
            }
        }
    }


    // forn(i,1,1e6+2)
    // {
    //     vector<ll> s;
    //     for(auto p : primes)
    //     {
    //         ll t = i;
    //         if(p * p > i) break;
    //         if(t % p == 0)
    //         {
    //             s.push_back(p);
    //         }
    //         if(t % (t/p) == 0 && prime[t/p]) s.push_back(t/p);
    //     }
    //     dbg(i);
    //     dbgc(s);
    //     if(s.size() > 10) continue;
    //     cnt[s.size()][i] += 1;
    //     cnt[s.size()][i + 1] += -1;
    // }

    // dbgc(primes);
    // return;

    for(auto p : primes)
    {
        for(ll i = p; i <= 1e6 + 2; i += p)
        {
            fcnt[i]++;
        }
    }
    // dbgc(fcnt);
    // for(auto x : fcnt) cout << x << " ";

    // 
    forn(i,1,1e6+2) if(fcnt[i] <= 10) 
    {
        cnt[fcnt[i]][i]++;
        // cnt[fcnt[i]][i+1]--;
    }

    forn(i,0,11) {
        forn(j,1,1e6 + 2) cnt[i][j] += cnt[i][j-1];
        // dbgc(cnt[i]);
    }

    
    return;
}   
    
    
void Solve(ll test)
{
    ll a, b, n; cin >> a >> b >> n;
    cout << cnt[n][b] - cnt[n][a-1] << nl;
    return;
}   
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();

    // freopen("dbg.txt","w",stdout);
    // freopen("out.out","w",stdout);
    
    cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   