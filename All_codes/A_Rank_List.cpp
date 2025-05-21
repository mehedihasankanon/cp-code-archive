// Bismillahir Rahmanir Rahim
     
     
// link    : https://codeforces.com/problemset/problem/166/A
// status  : wa
     
     
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
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
    
ll MOD = 1000000007; // 998244353
ld eps = 1e-12;
    
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


bool comp (pair<ll,ll> a, pair<ll,ll> b)
{
    return (a.first > b.first) or (a.first == b.first and a.second < b.second);
}

void AmiEktaGadha()
{   
    ll n, k; cin >> n >> k;
    vector<pair<ll,ll>> a; map<pair<ll,ll>,ll> mp;
    forn(i,n)
    {
        ll prob, pen; cin >> prob >> pen;
        a.push_back({prob,pen});
        mp[{prob,pen}]++;
    } 

    sort(all(a));
    forn(i,n) { dbg(i+1); dbg(a[i].fi); dbg(a[i].se); }


    //cout << a[k-1].fi << a[k-1].se << nl;
    cout << mp[a[k-1]] << nl;
    return;

}   
    
int main()
{   
    fastio;
    ll t = 1;
    //cin >> t;
    
    ll i;
    for(i = 0; i < t; i++)
    {
        AmiEktaGadha();
    }
    return 0;
}   
/*
NEVER FORGET TO:
    Look at the problem's constraints before coding.
How to cheese CF:
    Find a lower bound or upper bound for the problem. Have faith that it is the answer of the problem.
    If it isn't the answer, have more faith or change to another bound god by looking for a better bound.
 
    Trust guesses. Who has time to think? If people in div2 AC the problem it requires no proof since people don't prove things.
 
    You must draw cases. Thinking gets you nowhere, so draw cases and reach illogical conclusions from them.
    Sometimes drawing cases is bad because it takes too much time. Faster is to not think at all
    and just code a bruteforce solution.
    This is called "law of small numbers". If something works for small numbers, surely it works for big numbers.
    https://en.wikipedia.org/wiki/Faulty_generalization#Hasty_generalization don't mind the "faulty" part of it,
    in competitive programming mistakes are lightly punished
    Don't think about them being right or not, cf is a battle of intuition only.
 
    Be as stupid as possible in implementation. Trying to be smart is an easy way to get WA.
 
    Think about 2x2 cases for matrix problems and hope that everything works for the general case.
 
    Find a necessary condition and trust it to be sufficient. They're basically the same thing.
 
    Heuristics might speed up your code. Forget about complexity, it's only about ACing and not proving that your solution is good.
 
    For paths in a grid starting at (1, i) or something like that, assume that they never cross and do D&C
 
    Consider doing problems in reverse order of queries/updates
 
    For combinatorics problems, consider symmetry
 
General strategy (MUST DO):
    Try to solve the problem with more restricted constraints.
 
About testing:
    Test n=1, a[i]=1, a[i]=n, etc. Basically, test low values. No need to test if pretests are strong, but if you get WA it's good.
 
This isn't a joke. Do it if you get stuck. It's shit practice in my opinion, but do it if you want AC.
*/
    









    
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

/*
i 0
a[i].fi 1
a[i].se 1
i 1
a[i].fi 1
a[i].se 2
i 2
a[i].fi 1
a[i].se 3
i 3
a[i].fi 1
a[i].se 5
i 4
a[i].fi 1
a[i].se 7
i 5
a[i].fi 1
a[i].se 8
i 6
a[i].fi 2
a[i].se 3
i 7
a[i].fi 2
a[i].se 3
i 8
a[i].fi 2
a[i].se 7
i 9
a[i].fi 2
a[i].se 10
i 10
a[i].fi 3
a[i].se 1
i 11
a[i].fi 3
a[i].se 2
i 12
a[i].fi 3
a[i].se 2
i 13
a[i].fi 3
a[i].se 3
i 14
a[i].fi 3
a[i].se 5
i 15
a[i].fi 3
a[i].se 6
i 16
a[i].fi 3
a[i].se 7
i 17
a[i].fi 3
a[i].se 8
i 18
a[i].fi 3
a[i].se 8
i 19
a[i].fi 4
a[i].se 5
i 20
a[i].fi 4
a[i].se 9
i 21
a[i].fi 4
a[i].se 9
i 22
a[i].fi 4
a[i].se 10
i 23
a[i].fi 5
a[i].se 4
i 24
a[i].fi 5
a[i].se 8
i 25
a[i].fi 5
a[i].se 8
i 26
a[i].fi 6
a[i].se 5
i 27
a[i].fi 6
a[i].se 8
i 28
a[i].fi 6
a[i].se 8
i 29
a[i].fi 7
a[i].se 2
i 30
a[i].fi 7
a[i].se 3
i 31
a[i].fi 7
a[i].se 5
i 32
a[i].fi 7
a[i].se 5
i 33
a[i].fi 7
a[i].se 9
i 34
a[i].fi 7
a[i].se 10
i 35
a[i].fi 8
a[i].se 1
i 36
a[i].fi 8
a[i].se 1
i 37
a[i].fi 8
a[i].se 2
i 38
a[i].fi 8
a[i].se 5
i 39
a[i].fi 8
a[i].se 6
i 40
a[i].fi 8
a[i].se 10
i 41
a[i].fi 9
a[i].se 5
i 42
a[i].fi 9
a[i].se 5
i 43
a[i].fi 9
a[i].se 8
i 44
a[i].fi 9
a[i].se 8
i 45
a[i].fi 9
a[i].se 9
i 46
a[i].fi 10
a[i].se 2
i 47
a[i].fi 10
a[i].se 4
i 48
a[i].fi 10
a[i].se 6
i 49
a[i].fi 10
a[i].se 7
2


*/