#include<stdio.h>
int main(){
int z=1;
int i,j,k,n;
scanf("%d",&n);
for(i=0;i<n;i++)
    {

     for(j=n-1;j>i;j--)
        {
         printf(" ");
        }
     printf("*");
     if(i!=0)
        {
        for(k=1;k<=z;k++)
          {
           printf(" ");
          }
        printf("*");
        z=z+2;
        }
     printf("\n");
     }
    for(i=n+1;i<2*n;i++)
     {
         for(j=0;j<(i-n);j++)
         {
             printf(" ");
         }
         printf("*");
         if(i!=(2*n)-1)
         {
          for(k=1;k<2*(2*n-1)-2*i;k++)
           printf(" ");
        printf("*");
     printf("\n");
         }
     }
return 0;
}
