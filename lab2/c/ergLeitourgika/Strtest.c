#include <stdio.h>

int main( ) {
  char InputBuffer [255] ,c [255];
  int i=0;
  printf(">");
  scanf("%s\n", InputBuffer);
  while (InputBuffer[i]!='\0') {
    printf("Buffer: %c\n",InputBuffer[i]);
    c[i]=InputBuffer[i];
    printf("c: %c\n",c[i] );
    printf("i: %d\n",i );
      i++;
  }
  printf("c: %s\n",c );
  return 0;
}
/*na dv gt den mporo na ballo ets times sto c*/
