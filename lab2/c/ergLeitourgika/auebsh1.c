#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char const *argv[]) {
char InputBuffer [255] ="bill";
pid_t pid;
  printf("db    8    db d88888b db        o88b    d88b    88b  d88  d88888b \n" );
  printf("88    8    88 88      88      d8P  Y8  8P  Y8  88 YbdP 88 88 \n" );
  printf("88    8    88 88ooooo 88      8P      88    88 88  88  88 88ooooo\n" );
  printf("Y8   I8I   88 88ooooo 88      8b      88    88 88  88  88 88ooooo \n" );
  printf("8b   d8 8b d8 88      88      Y8b  d8  8b  d8  88  88  88 88 \n" );
  printf("8b88  8d88b   Y88888P Y88888P   Y88P    Y88P   YP  YP  YP Y88888P \n \n " );
  while(1)
  {
  //  strcmp(,InputBuffer)!=0
//fgets(InputBuffer,sizeof(InputBuffer),stdin);//kati prepei na elenxo stin eisodo
    printf("auebsh1> \n");
    fgets(InputBuffer,sizeof(InputBuffer),stdin);//kati prepei na elenxo stin eisodo
    pid =fork();
    if(pid < 0)
    {
      perror("an error has ocured during the fork() creation \n");
      exit(1);
    }
    if(pid == 0)
    {
      //printf("the chiled:\n" );foe debuging
      execl("/bin/ls","InputBuffer",NULL);//to null gt mpenei.
      printf("end of exec\n");
    }
    printf("waiting\n");
    pid_t wait(int *status);

    //printf("InputBuffer %s\n",InputBuffer );


  }
  return 0;
}
