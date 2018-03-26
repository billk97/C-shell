#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  printf("Enter a value:");
  c=getchar();
  while(c!=EOF)
  {
    printf("\n the loop begins hear");
    printf("\n the value is: ");
    putchar(c);
    printf("\n Enter a value:");
    c=getchar();
  }

  return 0;
}
