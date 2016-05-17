#include<stdio.h>
int main()
{
int n,i,j;
int t;
scanf("%d", &t);
for(j=0;j<t;j++)
{
scanf("%d",&n);
int m=0;
for(i=1;i<n;i++)
{
if(n%i==0)
{m=m+i;}

}
if(m==n){printf("yes\n");}
else printf("no\n");
}

return 0;
}
