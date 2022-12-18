2. Write a program to report behaviour of Linux kernel including kernel version, CPU type and model. (CPU information) 
Source code:
#include <iostream >
#include <stdlib.h>
#include <stdio.h>
Using namespace std;
int main()
{
Cout<<”\n The kernel version is :\n”;
System(“cat/proc/sys/kernel/osrelease”);
Cout<<”\n The CPU info :\n”;
System(“cat\proc\cpuinfo\n”);
Cout<<endl;
return 0;
}
