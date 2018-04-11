#include "Read.h"
#include <stdio.h>
#include <stdlib.h>

 char * Read()
{
  char* Input[255];
  char s[1]=" ";
  char *token;
  char *pass=(char*)malloc(sizeof(char)*255);
  printf("auesh1>");
  if(scanf("%s",&Input[0])==EOF)
  {
    printf("ctl-d is been pressed!\n");
    exit(1);
  }
  token=strtok(Input,s);
  pass=Input;
  printf("pass: %s\n",pass );

  return *pass ;
}
