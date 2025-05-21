// AC

#include <stdio.h>

typedef long long ll;

ll mx(ll n)
{
    ll out = 0;
    while(!(n&1))
    {
        out++;
        n >>= 1;
    }
    return out;
}

int main ()
{
    ll ans = 0;
    ll n; scanf("%lld",&n);
    // ll ints[n];

    for(ll i = 0; i < n; i++)
    {
        ll x; scanf("%lld",&x);
        ans += mx(x);
    }
    printf("%lld\n",ans);
}