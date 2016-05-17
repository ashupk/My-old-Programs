#include<stdio.h>
int main()
{
int test,n,i,j;
scanf("%d", &test);

for(i=0;i<test;i++)
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
else if (n<2) printf("NOT PRIME\n");
}

return 0;

}












