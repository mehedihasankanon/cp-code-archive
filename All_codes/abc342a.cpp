#include <stdio.h>

int main (void)
{
  int N, X, Y, Z;
  scanf("%d %d %d %d", &N, &X, &Y, &Z);
  
  if(X < Y)
  {
    if(Z > X && Z < Y)
  {
    printf("Yes");
  }
  else 
    printf("No");
  }
  else
  {
    if(Z < X && Z > Y)
  {
    printf("Yes");
  }
  else 
    printf("No");
  }
  return 0;
}