#include <stdio.h>

int main(int argc, char const *argv[])
{
  char c[255];
  char firstInput[255];
  int i=0;
  int j=0;
  printf("Enter a value:");
  if(scanf("%s",&c[0])==EOF)
  {
    printf("ctl-d is been pressed!\n");
    return 0;
  }


  while(c!=EOF)
  {
    printf("\n the loop begins hear \n");
    printf("i: %d\n",i ++);
    printf(">\n");
    scanf("%s\n", &c);
    while(c[j]!='\0')
    {
      firstInput[j]=c[j];
      j++;
      printf("%c\n",firstInput[j]);
      printf("j: %d\n",j ++);
    }//endif
    printf("%c\n",firstInput);
    if(scanf("%c",&c[0])==EOF)
    {
      printf("ctl-d is been pressed!\n");
      return 0;
    }//endif
  }//endwhile

  return 0;
}
