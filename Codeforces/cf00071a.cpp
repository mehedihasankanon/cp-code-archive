#include <stdio.h>
#include <string.h>

typedef struct strings
{
    char first;
    int mid;
    char last;
}VARIABLES;


int main (void)
{
    int numin;
    scanf("%d", &numin);

    char input[100], store[numin][10];
    for(int i = 0; i < numin; i++)
    {
        //fgets(input, 100, stdin);
        scanf("%s", &input);

        int length = strlen(input);
        if(length == 11)
        {
            store[i][0] = input[0];
            store[i][1] = '9';
            store[i][2] = input[length - 1];
            store[i][3] = '\0';
        }
        if(length > 11)
        {
            store[i][0] = input[0];
            store[i][1] = (char) ((length - 2)/10 + '0');
            store[i][2] = (char) (length - 2 - (length - 2)/10 + '0');
            store[i][3] = input[length - 1];
            store[i][4] = '\0';
        } 
        if(length <= 10)
        {
            for(int j = 0; j < length; j++)
            {
                store[i][j] = input[j];
            }
        }
    }

    for(int i = 0; i < numin; i++)
    {
        printf("%c\n", store[i][4]);
    }
    return 0;
}
