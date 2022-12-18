3. Write a program to report behaviour of Linux kernel including information on 19 configured memory, amount of free and used memory. (memory information).
Source code:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a;
printf("\nKernel version: ");
system("cat\proc\sys\kernel\osrealaese");
printf("\nconfigured free and used memory:\n");
sytem("cat\proc\meminfo|awk 'NR==1,NR==2{print}'");
return 0;
}
