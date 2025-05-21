#include <stdio.h>

int main ()
{
    int n; scanf("%d",&n);
    int oddsum=0,evensum=0, sum = 0;
    int sign = 1;
    for(int term = 1; term <= n; term++)
    {
        oddsum += sign* (2*term-1);
        evensum += sign*(2*term);
        sign *= -1;
        sum += oddsum * evensum;
        printf("(");
        int psign = 1;
        for(int i = 1; i <= 2*term-1; i+=2)
        {
            if(i==1) printf("%d",i);
            else if(sign == 1) printf("+%d",sign*i);
            else printf("%d",sign*i);
            sign *= -1;
        }
        printf(")*(");
        psign = 1;
        for(int i = 2; i <= 2*term; i+=2)
        {
            if(i==2) printf("%d",i);
            else if(sign == 1) printf("+%d",sign*i);
            else printf("%d",sign*i);
            sign *= -1;
        }
        if(term < n)printf(")+");
        else printf(")\n");
    }
    printf("sum=%d\n",sum);
}