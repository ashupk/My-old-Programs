#include<stdio.h>
int main()
 {
   int i,j;
   char inputchar,temp='A';
   scanf("%c",&inputchar);
   for(i=1;i<=inputchar-'A'+1;i++)
     {
       for(j=1;j<=i;j++)

          printf("%c",temp);
          temp=temp+1;

          printf("\n");

     }

    return 0;
 }
