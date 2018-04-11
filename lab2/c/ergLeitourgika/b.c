,#include <stdio.h>

int main( ) {

    char c;

    printf( "Enter a value" );

    if ( scanf( " %c", &c ) == EOF ) {
        printf( "eof break" );
        return 0;
    }

    while ( c != EOF ) {

        printf( "\n the loop begin hear" );
        printf( "\n the value is: " );

        if ( c == '\n' ) {
            printf( ":O look c is equal to \\n"  );
        }

        putchar( c );

        printf( "\n Enter a value:" );

        if ( scanf( " %c", &c ) == EOF ) {
            printf("eof break\n" );
            break;
        }

    }

}
