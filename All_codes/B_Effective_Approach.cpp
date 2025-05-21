//Bismillahir Rahmanir Rahim
     
//#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
#include <bits/stdc++.h>
    
using namespace std;
    
typedef long long               ll;
typedef long double             ld;
typedef pair<int,int>           p32;
typedef pair<ll,ll>             p64;
typedef pair<double,double>     pdd;
typedef vector<ll>              v64;
typedef vector<int>             v32;

typedef vector<vector<int> >    vv32;
typedef vector<vector<ll> >     vv64;
typedef vector<vector<p64> >    vvp64;
typedef vector<p64>             vp64;
typedef vector<p32>             vp32;
    
ll MOD = 998244353;
double eps = 1e-12;
    
#define dbg(x)                  cout << #x << " " << x << endl
#define nl                      "\n"
#define fastio                  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF                     2e18
#define forn(i,e)               for(ll i = 0; i < e; i++)
#define forsn(i,s,e)            for(ll i = s; i < e; i++)
#define rforn(i,s)              for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e)           for(ll i = s; i >= e; i--)

#define sf2(x,y)                cin >> x >> y
#define sf3(x,y,z)              cin >> x >> y >> z
#define pnl                     cout << nl
#define eb                      emplace_back
#define mp                      make_pair
#define pb                      push_back
#define fi                      first
#define se                      second
#define all(x)                  (x).begin(), (x).end()
#define sz(x)                   ((ll)(x).size())
    
    
void solve()
{   
    /*ll n, m; v64 nums(n), q(m);
    cin >> n;
    forn(i,n)
    {
        ll x; cin >> x;
        nums.push_back(x);
    } 
    cin >> m;
    forn(i,m)
    {
        ll x; cin >> x;
        q.push_back(x);
    }

    ll nV = 0, nP = 0;

    forn(i,m)
    {
        auto pos = find(nums.begin(), nums.end(), q[i]);
        nV += (pos - nums.begin() + 1);
        nP += (n + 1) - (pos - nums.begin() + 1);
        // dbg(nP); dbg(nV);
    }

    cout << nV << " " << nP << "\n";
    return;*/

    /*ll n, m, q; 
    cin >> n;
    ll num[n];
    forn(i,n) cin >> num[i];
    
    cin >> m;

    ll nV = 0, nP = 0;
    forn(i,m)
    {
        cin >> q;
        forn(j,n)
        {
            if(num[j] == q)
            {
                nV += j+1;
                nP += (n+1) - (j+1);
                break;
            }
        }
    }
    cout << nV << " " << nP << "\n";
    return;*/

    vector<pair<ll,ll>> nums;
    ll n,m,q, ind = 1, nV = 0, nP = 0;
    cin >> n; 
    forn(i,n)
    {
        ll x; cin >> x;
        nums.push_back(make_pair(x,ind)); 
        ind++;
    }

    sort(nums.begin(), nums.end()); //forn(i,n) {cout << nums[i].fi << nums[i].se << nl;}

    cin >> m;
    forn(i,m)
    {
        cin >> q; // dbg(q);
        nV += nums[q-1].second; // dbg(nums[q-1].first); dbg(nums[q-1].second);
        nP += (n+1) - nums[q-1].second;
        // dbg(nV); dbg(nP);
    }

    cout << nV << " " << nP << nl;
    return;
}
    
int main()
{   
    fastio;
    solve();
    return 0;
    
}   
   
    









    
//OJ debugging 
    
/*  
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x << " " << x << endl
#else
#define dbg(x)
#endif
*/  
//goes into main()
/*
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
*/