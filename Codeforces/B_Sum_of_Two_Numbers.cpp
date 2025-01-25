// Bismillahir Rahmanir Rahim
     
     
// link    : https://codeforces.com/contest/1788/problem/B
// status  : wa wa wa ac
     
     
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
    
ll sd(ll x)
{
    ll sum = 0; // heheh how did i forget this one :)
    while(x > 0)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
}    


void solve()
{   
    ll n; cin >> n;
    ll y = n >> 1;
    ll z = n - y;
    
    if(y%10==9)
    {
        if(y != z)
        {
            // wrong approach
            /*ll p = (abs(sd(z)-sd(y)))/2 + 1;
            y += p; z -= p;*/

            // correct but bad approach
            /*while(abs(sd(z)-sd(y))>1)
            {
                y++; z--;
            }*/

            string x = to_string(n);
            y = 0; z = 0;
            int fl = 0;
            for(char c : x)
            {
                ll d = c - '0'; //dbg(d);
                if(d%2==0)
                {
                    y += d/2;
                    z += d/2;
                }
                else
                {
                    // had to see editorial for this idea :(
                    if(fl == 0)
                    {
                        y += d/2;
                        z += d/2+1;
                        //dbg(y); dbg(z);
                    }
                    else
                    {
                        y += d/2 + 1;
                        z += d/2;
                        //dbg(y); dbg(z);
                    }
                    fl = 1 - fl;
                }
                y *= 10;
                z *= 10;
            }
            y /= 10; 
            z /= 10;
        }
    }
    
    cout << y << " " << z << nl;
}   
    
int main()
{   
    fastio;
    ll t = 1;
    cin >> t;
    
    ll i;
    for(i = 0; i < t; i++)
    {
        solve();
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