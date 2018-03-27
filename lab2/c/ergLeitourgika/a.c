#include <stdio.h>

int main( ) {

    int c;

    printf( "Enter a value" );

    c = getchar();

    while ( c != EOF ) {

        printf( "\n the loop begin hear" );
        printf( "\n the value is: " );

        if ( c == '\n' ) {
            printf( ":O look c is equal to \\n"  );
        }

        putchar( c );

        printf( "\n Enter a value:" );

        c = getchar();

    }

}
