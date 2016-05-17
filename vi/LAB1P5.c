#include<stdio.h>
int main(){
int i,j;
int n;
int test;
scanf("%d", &test);
for(j=0;j<test;j++)
{
scanf("%d",&n);
int V=0;
for(i=1;i<n;i=i+1)
{if(n%i==0){V++;}}
if(V==n)
{printf("yes\n");}
else printf("no\n");
}return 0;
}
