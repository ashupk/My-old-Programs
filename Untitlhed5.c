#include<stdio.h>
int main()
 {
   int i,j,n;
   int k=0;
   scanf("%d",&n);
   for(i=1;i<=n/2;i++)
    {
      for(j=1;j<=(n/2)-i;j++)
       {
         printf(" ");
       }
      while(k!=2*i-1)
       {
        printf("*");
        k++;
       }
       k=0;
       printf("\n");
    }
    return 0;
 }
