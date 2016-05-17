#include<stdio.h>
int main()
   {
    char arr[10];
    char brr[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%c ",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        brr[i]=arr[9-i];
    }
    for(i=0;i<10;i++){
    printf("%c ",brr[i]);}

   }
