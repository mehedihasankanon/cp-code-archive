//Bismillahir Rahmanir Rahim
     
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

ll sum(ll a)
{
    ll sum = 0, d = 1;
    forn(i,7)//max 6 digit number. safekeeping er jonno 7
    {
        sum += (a/d)%10;
        d *= 10;
    }
    //dbg(sum);
    return sum;
}

void solve()
{   
    char n[100005];
    fgets(n,100005,stdin);

    ll s = 0, cnt = 1;

    if(strlen(n) == 2)
    {
        cout << "0" << nl;
        return;
    }
    else
    {
        for(ll i = 0; (n[i] != '\n'); i++) 
            s += n[i] - '0';
    }
    //dbg(s);

    while(1)
    {
        if(s < 10) 
        {
            cout << cnt << nl;
            return;
        }
        else
        {
            s = sum(s);
            cnt++;
        }
    }
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