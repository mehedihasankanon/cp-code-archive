// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/SPOJ-NAKANJ
// AC
    
// #pragma GCC optimize("O1,O2,O3")
// #pragma GCC optimize("Ofast,unroll-loops")
    
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

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    // dbg(test);
    string st, en; cin >> st >> en;
    map<string,bool> mp;
    map<string,string> prev;
    queue<string> q;

    q.push(st);
    mp[st] = 1;
    while(!q.empty())
    {
        string cur = q.front(); q.pop();
        // dbg(cur);

        if(cur == en)
        {
            break;
        }

        char col = cur[0];
        ll row = cur[1] - '0';

        if(col + 2 <= 'h')
        {
            if(row + 1 <= 8)
            {
                col += 2;
                string s1 = {col};
                s1.push_back(row + 1 + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col -= 2;
            }
            if(row - 1 >= 1)
            {
                col += 2;
                string s1 = {col};
                s1.push_back(row - 1 + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col -= 2;
            }
        }

        if(col - 2 >= 'a')
        {
            if(row + 1 <= 8)
            {
                col -= 2;
                string s1 = {col};
                s1.push_back(row + 1 + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col += 2;
            }
            if(row - 1 >= 1)
            {
                col -= 2;
                string s1 = {col};
                s1.push_back(row - 1 + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col += 2;
            }
        }

        if(row + 2 <= 8)
        {
            row += 2;

            if(col + 1 <= 'h')
            {
                col++;
                string s1 = {col};
                s1.push_back(row + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col--;
            }

            if(col - 1 >= 'a')
            {
                col--;
                string s1 = {col};
                s1.push_back(row + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col++;
            }

            row -= 2;
        }

        if(row - 2 >= 1)
        {
            row -= 2;

            if(col + 1 <= 'h')
            {
                col++;
                string s1 = {col};
                s1.push_back(row + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col--;
            }

            if(col - 1 >= 'a')
            {
                col--;
                string s1 = {col};
                s1.push_back(row + '0');
                if(!mp[s1])
                {
                    q.push(s1);
                    mp[s1] = 1;
                    prev[s1] = cur;
                }
                col++;
            }

            row += 2;
        }
    }

    ll ans = 0;
    while(en != st)
    {
        ans++;
        en = prev[en];
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