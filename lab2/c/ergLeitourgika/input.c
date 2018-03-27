#include <stdio.h>
#include <string.h>
int main (  int argc, char const *argv[])
{
  int i=0;
  char single_input;
  printf(">");
  if(scanf(" %c \n", &single_input)==EOF)
  {
    printf("eof: %c\n",single_input);
    return 0;
  }//end if
  printf("%s\n", );
  if ( single_input == '\n' ) {
      printf( ":O look c is equal to \\n"  );
  }
  printf("single_input %c \n",single_input );
  while(single_input!=EOF)
  {
    printf("i: %d\n", i);
    i++;
    printf("previus input: %c\n",single_input);
      if ( scanf( " %c", &single_input ) == EOF ) {
          printf("eof break\n" );
          break;
      }//end if
    printf(">");
  }//end while
}//end main
