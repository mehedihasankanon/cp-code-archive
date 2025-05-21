#include <bits/stdc++.h>
//ac

using namespace std;

typedef long long ll;

#define forn(i,s,e) for(ll i = s; i < e; i++)
#define nl "\n"

ll bs(vector<ll>& v,ll n,ll k)
{
    ll l = 0, r = v.back()-v.front()+1, mid;
    while(r > l+1)
    {
        mid = (l+r)/2;
        ll cnt = 1;
        forn(i,0,n)
        {
            ll j = i+1;
            while(j<n and v[j] < v[i]+mid) j++;
            if(j <= n-1) cnt++;
            i = j-1;
        }
        if(cnt >= k) l = mid;
        else r = mid;
    }
    return l;

}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    forn(i,0,n) cin >> v[i];

    cout << bs(v,n,k) << nl;
    return 0;
}