#include<stdio.h>
#include <stdbool.h>

#define forn(i,s,e) for(int i = s; i < e; i++)

int main()
{
    int n; scanf("%d",&n);
    bool a[3005];
    forn(i,0,3006) a[i] = false;
    forn(i,0,n)
    {
        int x; scanf("%d",&x);
        a[x] = true;

    }  
    int i;
    for(i = 1; a[i]; i++){}
    printf("%d",i);
    return 0;
}