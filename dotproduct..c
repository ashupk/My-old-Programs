/* Write a function dot product that takes as argument two integer arrays a and b
and an integer,size, and computes the dot product of the first size elements of a and b.

                           p= SUMMATION (i=1 to size) (ai X bi)                      */

#include<stdio.h>
int size;
int dot_product(int num1[size], int num2[size], int size){
    int dot[size],i;
         for(i=1;i<=size;i++){
            dot[i]=(num1[i])*(num2[i]);
         }
         return dot[i];
            }


int main()
{
    int size;
    scanf("%d",&size);
    int i,num1[size],num2[size],j;

    for(i=0;i<size;i++){
         scanf("%d",&num1[size]);
        }
         for(i=0;i<size;i++){
         scanf("%d",&num2[size]);
        }
        for(j=0;j<size;j++){

        printf("%d",dot_product(num1[j],num2[j],size));
}
        return 0;
}
