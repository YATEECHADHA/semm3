#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//1(a)
int main()
{
pid_t pid,p;
p=fork();
pid=getpid();
if(p<0)
{
fprintf(stderr,"Fork Failed");
return 1;
}
printf("Output of fork id: %d\n",p);
printf("Process id is: %d \n",pid);
return 0;
}
Same Program, different code
#include<stdio.h>
#include<unistd.h>
2
#include<stdlib.h>
int main()
{
pid_t pid,p;
pid=fork();
if(pid<0)
{
fprintf(stderr,"Fork Failed");
exit(1);
}
else if(pid==0){
printf("\n I am Child Process");
printf("\n My pid is: %d",getpid());
exit(0);
}
else{
printf("\n I am Parent Process ");
printf("\n My pid is: %d", getpid());
exit(1);
}
}
//1(c)
c) Before terminating, the parent waits for the child to finish
its task.
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid;
pid=fork();
if(pid<0){
printf("\n Error ");
exit(1);
}
else if(pid==0){
printf("\nI am Child Process");
printf("n My pid is:%d",getpid());
exit(0);
}
else{
printf("\nI am Parent Process");
printf("\n My actual pid is: %d", getpid());
wait(NULL);
exit(1);
}
}


