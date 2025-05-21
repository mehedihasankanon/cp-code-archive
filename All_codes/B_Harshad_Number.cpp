//https://atcoder.jp/contests/abc080/tasks/abc080_b
//ac

#include <stdio.h>

typedef long long ll;

ll sum(ll x)
{
    ll ans = 0;
    while(x > 0)
    {
        ans += x%10;
        x /= 10;
    }
    return ans;
}

int main ()
{
    ll x; scanf("%lld",&x);
    if(x%sum(x)==0) printf("Yes\n");
    else printf("No\n");

    return 0;
}