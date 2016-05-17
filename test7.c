#include<stdio.h>
int main()
{


int a,i,t,b;
for(a=0; a<=10000; a=(a+10000)/2)
    {
   printf("GREATER %d\n", a);
    scanf("%d\n", &t);
if(t==0) break;
}
for(b=5000; b>=0; b=(b)/2)
{
    printf("LESS %d\n", b);
    scanf("%d\n", &t);
    if(t==1) break;
}

return 0;
}
