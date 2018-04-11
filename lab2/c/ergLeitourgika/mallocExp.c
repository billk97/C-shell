#include <stdio.h>
int main ()
{
  int pnt = (int*)malloc(10*sizeof(int));
  printf(">");
    scanf("%d\n",pnt);
    printf("malloc: %d\n",pnt );
    free(pnt);
    printf("malloc: %d\n",pnt );
  //  printf("malloc: %d\n",&0pnt );


}
