#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  printf("this is a pointer example\n" );
  int a,b,i;
  a=1,b=2,i=0;
  int *p=a;
  int *p1=&a;
  char cin [40]="off";
  char input[40];
  char   buf[50];
  pid_t pid;
  /*kanoniki timi tou a*/
  /*apotelesma -->1 */
  printf("a= %d \n",a);
  /*kanoniki timi tou b*/
  /*apotelesma -->2 */
  printf("b= %d \n",b);
  /*dieythnsh tou a*/
  /*apotelesma -->-349585136*/
  printf("a= %d \n",&a);
  /*dieythnsh tou b*/
  /*apotelesma -->-349585132 */
  printf("b= %d \n",&b);
  /*pointer poy dixnei ston a diladi krataei thn timh tou a */
  /*apotelesma -->1*/
  printf("p= %d \n",p);
  /*h thesi mnhmhs tou pointer p*/
  /*apotelesma -->-349585128*/
  printf("&p= %d \n",&p);
  /*pointer poy dixnei sthn thesi mnhmhs toy a dhladh sthn dieyuhnsh*/
  /*apotelesma -->-349585136*/
  printf("p1= %d \n",p1);
  /*ektiponei th uesh mnimhs toy p1 */
  /*apotelesma -->-349585120*/
  printf("&p1= %d \n",&p1);
  /*ektiponei tp*p1*/
  /*apotelesma -->1 */
  printf("*p1= %d \n",*p1);
  printf("a = %d, b = %d\n",a,b );
  exchange(a,b);
  printf("a = %d, b = %d\n",a,b );
  printf("a = %d, b = %d\n",a,b );
  exchangePointer(&a,&b);
  printf("a = %d, b = %d\n",a,b );
  printf("/////////////////////////////////////////////////////////////////////\n" );

  pid=fork();
  printf("pid=%d\n",pid );
  if(pid!=0)
  {
    i++;
    ParentProcess();
    waitpid(-1,&status,0);
  }
  else
  {

    i++;
    ChildProcess();
    execve(ls,-a,0);

  }
  printf("i%d\n",i );
  /*
  for (i = 1; i <= 100; i++) {
          sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
          write(1, buf, strlen(buf));
     }
     */
  /*while(strcmp(cin,input)!=0)
  {
    printf("shell:");
    gets(input);
  }//end while*/
  return 0;
}//end main
void ChildProcess()
{
  printf("i am the child\n" );
}
void ParentProcess()
{
  printf("i am the Parent\n");
}
void exchange(int a,int b)
{
  printf("before: %d %d\n",a,b );
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("after: %d %d\n",a,b );

}
void exchangePointer(int *a,int *b)
{
  printf("before: %d %d\n",a,b );
  int *temp=*a;
  *a=*b;
  *b=temp;
  printf("temp %d\n",temp );
  printf("after: %d %d\n",a,b);

}
