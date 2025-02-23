// Bismillahir Rahmanir Rahim

// link    : https://atcoder.jp/contests/dp/tasks/dp_d
// status  : AC

#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")

using namespace std;

using ll = long long;
using ld = long double;

ll M = 1000000007;
ll MOD = 998244353;
ld EPS = 1e-12;
ll INF = 0x7fffffffffffffffLL;

#define dbg(x) cerr << #x << " " << x << "\n"
#define NL "\n"
#define forn(i, s, e) for (ll i = s; i < e; i++)
#define rfor(i, s, e) for (ll i = s; i >= e; i--)

ll testcase = 1;

void Pre(void) {

  return;
}

void Solve(ll test) {
  ll n, wt;
  cin >> n >> wt;
  vector < ll > v(n), w(n);
  vector < vector < ll >> dp(n + 1, vector < ll > (wt + 1, 0));

  forn(i, 0, n) cin >> w[i] >> v[i];

  forn(i, 1, n + 1) {
    forn(j, 1, wt + 1) {
      if (w[i - 1] > j) dp[i][j] = dp[i - 1][j];
      else {
        dp[i][j] = max(dp[i - 1][j], v[i - 1] + dp[i - 1][j - w[i - 1]]);
      }
    }
  }
  cout << dp[n][wt] << NL;
  return;

  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  Pre();

  // cin >> testcase;

  ll test;
  for (test = 1; test <= testcase; test++) {
    Solve(test);
  }
  return 0;
}