#include  "Read.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
const char *InputBuffer=Read();
printf("InputBuffer: %s\n",InputBuffer );
}
