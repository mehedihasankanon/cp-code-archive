#include <stdio.h>
#include <math.h>

long long pwr(long long x)
{
    long long ans = 0;
    while(x%2 == 0)
    {
        ans++; x/=2;
    }
    return ans;
}

long long min(long long a, long long b)
{
    if(a >= b) return b;
    else return a;
}

int main ()
{
    long long n; scanf("%lld", &n);
    long long ans = 10000000000;
    for(long long i = 0; i < n; i++)
    {
        long long x; scanf("%lld", &x);
        ans = min(ans,pwr(x)); //cout << ans << endl;

    }
    printf("%lld", ans);
    return 0;
}