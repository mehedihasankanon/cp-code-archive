// accepted

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll inf = 9223372036854775807;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cerr << inf << endl;

    ll n, x; cin >> n >> x;
    vector<ll> c(n), dp(x +1,inf);
    for(ll i= 0; i < n; i++) cin >> c[i];

    dp[0] = 0;
    for(ll i = 1; i <= x; i++)
    {
        for(int v : c)
        {
            if(i - v >= 0 && dp[i - v] != inf) dp[i] = min(dp[i],dp[i - v] + 1);
            // cerr << i << " " << 
        }
        // cerr << i << " " << dp[i] << endl;
    }
    if(dp[x] == inf)
    {
        cout << -1 << endl;
        return 0;
    }
    else 
    {
        cout << dp[x] << endl;
        return 0;
    }
}