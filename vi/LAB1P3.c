#include<stdio.h>
int main()
{int n,i,p;
int t;
scanf("%d", &t);
for(p=0;p<t;p=p+1)
{scanf("%d",&n);
int m=0;
for(i=1;i<n;i++)
{if(n%i==0)
{m=m+i;}}
if(m==n){printf("yes");}
else printf("no");}
return 0;}
