#include<stdio.h>
int main()
{
int count,n,t,i;
scanf("%d", &t);
for(i=0;i<t;i++)
{scanf("%d", &n);
count=0;
do{
n=n/10;
count=count+1;}
while (n!=0);
printf("%d\n", count);}
return 0;}
