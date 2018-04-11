#include "Rint.h"
#include <stdio.h>

int Rint()
{
  int it=0;
  scanf("%d",&it);
  printf("it:%d\n",it);
  //int * pointer =it;
  return it;
}
#include <math.h>
#include <stdio.h>

int sum();
int main()
{
    int num=0;
    char ok[255];
    scanf("%s",&ok );
    printf("\nSum of two given values = %d", num);

    num = sum();

    printf("\nSum of two given values = %d", num);
    return 0;
}

int sum()
{
    int a = 50, b = 80, sum;
  //  sum = a + b;
    printf("ok\n" );
    scanf("%d",&sum );
    return sum;
}
