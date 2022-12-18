PRACTICAL 4: Write a program to print file details including owner access permissions, file access time, where file name is given as argument.
Source code:
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
int main(int argc,char *argv[10])
{
int i;
struct stat buffer;
struct tm dt;
printf("give file name; ");
for(i=1; i<argc; i++)
{
printf("file=%s\n", argv[i]);
if(stat(argv[i],&buffer)<0)
printf("error in the file name");
else
{
printf("ower:%d\ngid=%d\n",buffer.st_uid,buffer.st_gid);
printf("acess p3ermission= %d\n",buffer.st_mode);
dt=*(gmtime(&buffer.st_ctime));
printf("access time %d-%d-%d-%d:%d%d\n",dt.tm_mday,dt.tm_mon,dt.tm_year+1900,dt.tm_hour,dt.tm_min,dt.tm_sec);
}
}
return 0;
}
