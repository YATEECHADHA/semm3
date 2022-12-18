6. Write a program to implement FCFS scheduling algorithm.
Source code:
#include<iostream>
#include<stdio.h>
using namespace std;
int tim=0;
int main()
{
int n,b[20],i,j,w[20],tw=0,taround[20],tt=0;
float avw,avt;
cout<<"\nEnter the Number of Processes: ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"\nEnter the Burst Time of Process "<<i<<": ";
cin>>b[i];
}
for(i=1;i<=n;i++)
{
w[i]=tim;
for(j=1;j<=b[i];j++)
{
tim++;
if(j==b[i])
taround[i]=tim;
}
}
for(i=1;i<=n;i++)
{
tw=tw+w[i];
}
avw=(float)tw/n;
for(i=1;i<=n;i++)
{
tt=tt+taround[i];
}
avt=(float)tt/n;
cout<<"\nWaiting Times and Turn Around Times of the Processes";
printf("\n***************************************************");
for(i=1;i<=n;i++)
{
cout<<"\nProcess: "<<i<<"-->"<<"Waiting Time: "<<w[i]<<", "<<"Turn Around Time: "<<taround[i];
}
cout<<"\n\nAverage Waiting Time: "<<avw;
cout<<"\nAverage Turn Around Time: "<<avt<<endl;
return 0;
}
