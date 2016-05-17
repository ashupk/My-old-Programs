#include<stdio.h>
int main()
{
 int i,n;
 int row;
 int nspace,nstar;
 scanf("%d",&n);
 for(i=1;i<=2*n-1;i++)
    printf("*");
    printf("\n");
 for(row=n-1;row>=1;row--){
        for(nspace=1;nspace<=n-row;nspace++){
            printf(" ");

        }
        for(nstar=2*row-1;nstar>=1;nstar--){
            printf("*");
        }
        printf("\n");

 }

  return 0;
}
