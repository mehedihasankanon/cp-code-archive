// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/URAL-1242
// AC!!!!!
    
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
    vector<bool> ded(n+1,false), sus(n+1,true);
    vector<vector<ll>> anc(n+1), des(n+1);

    string temp; cin >> temp;
    while(temp != "BLOOD")
    {
        ll chi = stol(temp), par = 0;
        cin >> par;
        ll idx = 0;
        // idx++;
        // while(temp[idx]) par = par * 10 + temp[idx] - '0', idx++;

        anc[chi].push_back(par);
        des[par].push_back(chi);
        // dbg(chi); dbg(par);
        cin >> temp;
    }

    // forn(i,1,n+1)
    // {
    //     dbg(i); dbgc(anc[i]); dbgc(des[i]);
    // }

    ll d; 
    while(cin >> d)
    {
        dbg(d);
        // dbg(d);
        ded[d] = true;
        queue<ll> q; 
        // ancestor clearance
        q.push(d);
        for(auto p : anc[d]) q.push(p);
        while(!q.empty()) 
        {
            dbg(q.front());
            dbgc(anc[q.front()]);
            for(auto p : anc[q.front()])
            {
                if(sus[p]) {sus[p] = false; for(auto p1 : anc[p]) q.push(p1);}
            }
            q.pop();
        }
        // descendant clearance
        q.push(d);
        for(auto p : des[d]) q.push(d);
        while(!q.empty()) 
        {
            for(auto p : des[q.front()])
            {
                if(sus[p]) {sus[p] = false; for(auto p1 : des[p]) q.push(p1);}
            }
            sus[q.front()] = false;
            q.pop();
        }
        sus[d] = false;
    }

    


    vector<ll> ans;
    forn(i,1,n+1) if(sus[i]) ans.push_back(i);
    
    if(ans.empty())
    {
        cout << 0 << nl;
        return;
    }
    for(auto x : ans)
    {
        cout << x << " ";
    }
    cout << nl;
    return;





}   
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    // cin >> testcase;
    
    ll test;
    for(test = 1; test <= testcase; test++) {
        Solve(test);
    }
    return 0;
}   