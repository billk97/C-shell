#include "Read.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 char * Read()
{
  char Input[255];
  char s[2]=" ";
  char *token;
  char *pass=(char*)malloc(sizeof(char)*255);
  printf("auesh1> ");
  if(scanf("%s",&Input[0])==EOF)
  {
    printf("ctl-d is been pressed!\n");
    free(pass);
    exit(1);
  }
  token =strtok(Input,s);
  strcpy(pass,token);
  return (pass);
  free(pass);
}
char * Read2()
{
 char Input[255];
 char s[2]=" ";
 char *token;
 char *pass=(char*)malloc(sizeof(char)*255);
 printf("auesh1> ");
 if(scanf("%[^\n]s",&Input[0])==EOF)
 {
   printf("ctl-d is been pressed!\n");
   free(pass);
   exit(1);
 }
 printf("Input: %s \n",Input );
 token =strtok(Input,s);
 printf("token: %s\n",token );
 strcpy(pass,token);
 fflush(stdout);
 memset(Input,0,255);
 return (pass);
 free(pass);
}
