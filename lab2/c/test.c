#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  printf("this is a pointer example\n" );
  int a,b;
  a=1,b=2;
  int *p=a;
  int *p1=&a;
  printf("a= %d \n",a);
  printf("b= %d \n",b);
  printf("a= %d \n",&a);
  printf("b= %d \n",&b);
  printf("p= %d \n",p);
  printf("&p= %d \n",&p);
  printf("p1= %d \n",p1);
  printf("&p1= %d \n",&p1);
  printf("*p1= %d \n",*p1);

  return 0;
}
