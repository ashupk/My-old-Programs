#include<stdio.h>
int main()
{
int m,n,t,i;
scanf("%d", &t);

for(i=0;i<t;i++)
{
scanf("%d", &n);
m=0;
do
   {

    n=(n/10);
    m++;
    }
while (n!=0);
printf("%d\n", m);


}
return 0;
}
