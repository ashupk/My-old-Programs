#include<stdio.h>
int main()
{
int t,i,n1,n2;
scanf("%d", &t);
for(i=0;i<t;i++)
{
scanf("%d%d", &n1,&n2);
int b=0,p,a;

p=n1%10;
b=n1/10;
a=b+(10*p);

int b1=0,p1,a1;
p1=n2%10;
b1=n2/10;
a1=b1+(10*p1);


printf("%d\n", a+a1);
}
return 0;

}
