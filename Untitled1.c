#include<stdio.h>
int main()
{
int t,n,i,j;
scanf("%d", &t);

for(i=0;i<t;i++)
{
scanf("%d", &n);
for (j=2;j<n;j++)
{{
if((n%j)==0)
{
printf("NOT PRIME\n");
break;}
}

}
if (j==n) printf("PRIME\n");
else if (n==1) printf("NOT PRIME\n");
}

return 0;

}












