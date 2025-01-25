#include <stdio.h>
#include <string.h>



int main (void)
{
    const int max = (int) 2e5; 
    char S[max], T[max];
    fgets(S, 2e5, stdin);
    fgets(T, 2e5, stdin);
    
    /*scanf("%s", &S);
    scanf("%s", &T);*/

    /*
    --starts from j = 0th position, once finds the 0th char of first(say n), saves the position in an array and increases j from 0 to 1
    --starts from the n + 1 th position: no need for continue ase the loop's increment makes sure we're not looking for the same thing over again!
    --
    */

    int l1 = strlen(S), l2 = strlen(T), j = 0;
    int pos[l1];
    for(int i = 0; i < l2; i++)
    {
        if(T[i] == S[j])
        {
            pos[j] = i + 1;
            j++;
        }
    }
    
    for(int i = 0; i < (l1 - 1); i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\n");
    return 0; 
}