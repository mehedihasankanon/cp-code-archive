#include <stdio.h>

typedef long long ll;

#define REP(i,s,n) for(ll i = s;i < n; i++)
#define si(x) scanf("%lld",&x);

int comp(const void* a,const void* b)
{
    int x = *(const int*) a; int y = *(const int*) b;

    return (a < b) ? 1 : 0;
}

int main ()
{
    ll n; si(n);
    ll a[n], ans = 0; REP(i,0,n) {si(a[i]); ans += abs(i+1-a[i]);}
    qsort(a, n, sizeof(a[0]), comp);

    
    /*ll ans = 0;
    REP(i,0,n)
    {
        ans += abs(i+1-a[i]);
    }*/
    printf("%lld", ans);

}