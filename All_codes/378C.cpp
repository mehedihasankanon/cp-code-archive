// https://codeforces.com/contest/378/problem/C
// AC

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
#define forn(i, s, e) for (ll i = s; i < e; i++)
#define forr(i, s, e) for (ll i = s; i >= e; i--)

#define DEBUG

#ifdef DEBUG
#define dbg(n) cerr << __LINE__ << " " << #n << " " << n << endl;
#define dbgc(a)                                         \
    cerr << __LINE__ << " " << #a << " " << '[' << " "; \
    for (auto el : a)                                   \
    {                                                   \
        cerr << el << " ";                              \
    }                                                   \
    cerr << ']' << endl;
#define dbgcc(a)                                                                 \
    cerr << __LINE__ << " " << #a << " " << '[' << " ";                          \
    for (auto el : a)                                                            \
    {                                                                            \
        cerr << '{' << " " << el.first << ',' << el.second << " " << '}' << " "; \
    }                                                                            \
    cerr << ']' << endl;
#else
#define dbg(n)   // single variable, string
#define dbgc(a)  // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif

ll testcase = 1;

void Pre(void)
{

    return;
}

void Solve(ll test)
{
    vector<pair<ll, ll>> dir{{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    ll n, m, k;
    cin >> n >> m >> k;
    vector<string> v(n);
    ll s = 0, sx = -1, sy = -1;
    forn(i, 0, n)
    {
        cin >> v[i];
        for (auto x : v[i])
        {
            s += (x == '.');
        }
    }

    s -= k;

    // dbg(s);

    vector<vector<bool>> vis(n, vector<bool>(m, 0));

    forn(i, 0, n)
    {
        bool fl1 = 0;
        forn(j, 0, m)
        {
            if (v[i][j] == '.' && s > 0)
            {
                queue<pair<ll, ll>> q;
                q.push({i, j});
                vis[i][j] = 1;
                s--;
                if (s <= 0)
                {
                    fl1 = 1;
                    break;
                }
                while (!q.empty())
                {
                    pair<ll, ll> cur = q.front();
                    q.pop();
                    bool fl = 0;

                    for (auto [dx, dy] : dir)
                    {
                        ll tx = cur.first + dx, ty = cur.second + dy;
                        if (tx >= 0 && ty >= 0 && tx <= n - 1 && ty <= m - 1 && v[tx][ty] != '#' && !vis[tx][ty])
                        {
                            // q.push({tx, ty});
                            // vis[tx][ty] = 1;
                            // s--;
                            // if (s <= 0)
                            // {
                            // 	fl = 1;
                            // 	break;
                            // }
                            if (s)
                            {
                                dbg(s);
                                vis[tx][ty] = 1;
                                s--;
                                q.push({tx, ty});
                            }
                            else
                            {
                                fl = 1; break;
                            }
                        }
                    }
                    if (fl)
                        break;
                }
            }
        }
        if (fl1)
            break;
    }

    forn(i, 0, n) forn(j, 0, m)
    {
        if (v[i][j] == '.' && !vis[i][j])
        {
            v[i][j] = 'X';
            // dbg(i); dbg(j);
        }
    }

    forn(i, 0, n) cout << v[i] << nl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Pre();

    // cin >> testcase;

    ll test;
    for (test = 1; test <= testcase; test++)
    {
        Solve(test);
    }
    return 0;
}