#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long int ara[n];
        long long int su[n];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            mp[ara[i]]++;
            su[i] = ara[i];
        }

        sort(ara, ara + n);

        if (k == 1)
        {
            long long maxi = 0;

            if (su[0] == ara[n - 1])
            {

                for (int i = 1; i < n; i++)
                {
                    maxi = max(maxi, su[i]);
                }

                cout << ara[n - 1] + maxi << endl;
            }

            else if (su[n - 1] == ara[n - 1])
            {

                for (int i = 0; i < n - 1; i++)
                {
                    maxi = max(maxi, su[i]);
                }

                cout << ara[n - 1] + maxi << endl;
            }

            else
            {

                cout << ara[n - 1] + max(su[0], su[n - 1]) << endl;
            }
            continue;
        }

        long long ans = 0;
        k++;
        for (int i = n - 1; i >= 0; i--)
        {
            if (k == 0)
            {
                break;
            }
            ans += ara[i];
            k--;
        }

        cout << ans << endl;
    }

    return 0;
}
