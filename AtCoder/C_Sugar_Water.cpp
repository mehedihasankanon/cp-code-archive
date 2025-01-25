// link   : https://atcoder.jp/contests/abc074/tasks/arc083_a
// status : wa

#include <stdio.h>
#include <stdbool.h>

typedef long long ll;

bool good(ll a, ll b, ll e, ll f) // a grams of sugar, b grams of water
{
    return (100*a)/b<=e && a+b<=f;
}

int main ()
{
    ll a, b, c, d, e, f; scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
    a *= 100; b *= 100;

    // 100c/b <= e, c+b <= f

    if(good(c,a,e,f)) printf("%lld %lld", c+a, c);
    else if(good(c,b,e,f)) printf("%lld %lld", c+b, c);
    else if(good(d,b,e,f)) printf("%lld %lld", d+b, d);
    else if(good(d,a,e,f)) printf("%lld %lld", d+a, d);

    return 0;



}