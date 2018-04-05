#include <stdio.h>

int main( ) {
  char InputBuffer [255] ,c [255];
  int i=0,j=0;
  printf(">");
      scanf("%s", InputBuffer);
      printf("InputBuffer: %s\n",InputBuffer);
  while (InputBuffer[i]!='\0') {
    printf("Buffer: %c\n",InputBuffer[i]);
    c[i]=InputBuffer[i];
    printf("c: %c\n",c[i] );
    printf("i: %d\n",i );
      i++;
  }
  printf("1 c: %s\n",c );
  scanf("%s", InputBuffer);
  printf("2 InputBuffer: %s\n",InputBuffer );
  while (InputBuffer[j]!='\0') {
    printf("Buffer: %c\n",c[j]);
    c[j]=InputBuffer[j];
    printf("2 c: %c\n",c[j] );
    printf("j: %d\n",j );
      j++;
  }
  printf("c: %s\n",c );


  return 0;
}
/*na dv gt den mporo na ballo ets times sto c*/
