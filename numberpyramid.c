#include<stdio.h>
int main()
 {
   int i,j,n;
   scanf("%d",&n);
   printf("\n\n\n\n");
   for(i=1;i<=n;i++)
     {
       for(j=1;j<=i;j++)
         {
           printf("%d  ",j);
         }

       printf("\n\n");
     }

    return 0;
 }
