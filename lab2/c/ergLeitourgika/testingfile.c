#include <stdio.h>

int main(int argc, char const *argv[])
{
  char c;
  printf("Enter a value:");
  if ( scanf( " %c", &c ) == EOF ) {
      printf( "eof break" );
      return 0;
  }
  while(c!=EOF)
  {
    printf("\n the loop begins hear");
    printf("\n the value is: ");
    if ( c == '\n' )
    {
          printf( ":O look c is equal to \\n"  );
    }
    putchar( c );
    printf("\n Enter a value:");
    c=getchar();
    if ( scanf( " %c", &c ) == EOF )
    {
        printf("eof break\n" );
        break;
    }
  }
  return 0;
}
