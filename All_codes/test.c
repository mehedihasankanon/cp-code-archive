#pragma gcc optimize "Ofast"
#pragma gcc optimize "unroll-loops"

int main ()
{
    int x; scanf("%d",&x);
    int t1 = (x*x+x)/2;
    int t2 = 0;
    
    for(int i = 0; i < x-1 ; i++)
    {
        int n; scanf("%d",&n);
        t2 += n;
    }

    printf("%d",t1-t2);

}