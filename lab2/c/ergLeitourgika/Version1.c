#include <stdio.h>
int main( ) {
  char InputBuffer[5],ExceInput[255];
  int i=0;
  int j=0;
  printf("shell>");
  scanf("%s\n",InputBuffer);//elenxos an einai megalhtero to255 logika gia ayto thelo malloc
  if(scanf("%c",&InputBuffer[0])==EOF)
  {
    printf("ctl-d is been pressed!\n");
    return 0;
  }
  printf("I'm ok\n");
  while(InputBuffer[0]!=EOF)//or !=\o
  {
    printf("the loop begins hear \n");
    printf("i: %d\n",i ++);
    while(InputBuffer[j]!='\0')
    {
      ExceInput[j]=InputBuffer[j];
      printf("j: %d\n",j ++);

    }//endif
    printf("ExceInput: %s\n",ExceInput);
    do
    {
      /*edo to loop mpainei gt h scanf diabazei zaraktira xaraktira ara exo thema
      ua kanei osa loop h lejei
      ara bazo ena loop mexri telos gramhs gia na kanei ta loop ekei mesa*/
      if(scanf("%c",&InputBuffer[0])==EOF)
      {
        printf("ctl-d is been pressed!\n");
        return 0;
      }//endif
    }while(InputBuffer!='\n');

  }//endwhile
printf("ExceInput: %s\n",ExceInput);
}
