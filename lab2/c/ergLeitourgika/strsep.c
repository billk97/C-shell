#include <stdio.h>
#include <string.h>
int main( ) {
  char str[50]="bill ok am seperating";
  char s[2]=" ";
  char *token;
  char InputBuffer[255];
printf(">");
  scanf("%s", InputBuffer);
  printf("InputBuffer: %s\n",InputBuffer);
  token =strtok(InputBuffer,s);
  printf("1:%s\n",token );
  token=strtok(NULL,s);
  printf("2:%s\n",token );
  while (token != NULL) {
    printf("token %s\n",token );
    token=strtok(NULL,s);
    /* code */
  }
  scanf("%s", InputBuffer);
  printf("InputBuffer: %s\n",InputBuffer);
  return 0;
}
