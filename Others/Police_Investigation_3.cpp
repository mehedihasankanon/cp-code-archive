// NOTE: it is recommended to use this even if you don't understand the following code.

// https://training.olinfo.it/task/ois_police3
// ac

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<int> T(N);
    for (int i=0; i<N; i++)
        cin >> T[i];

    using ll = int;
    ll n = N;
    vector<int>& t = T;
    vector<vector<ll>> dp(n+1, vector<ll>(2,0));

    dp[1][0] = 0;
    dp[1][1] = t[0];
    if(n > 1)
    {
        dp[2][0] = dp[1][1];
        dp[2][1] = t[1];
    }

    for(ll i = 2; i < n + 1; i++)
    {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + t[i-1];
    }

    cout << min(dp[n][0],dp[n][1]) << endl; 
    return 0;
}
