#include<stdio.h>
void square_array(int a[],int b[],int n)  //Functions is defined
{
    if(n==0) return;
    else {
        b[0]=a[0]*a[0];
        square_array(a+1,b+1,n-1);  //Use of recursion
    }
    return;
}
int main()
{
   int n;
   scanf("%d",&n);
   int a[n],b[n];
   int i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   square_array(a,b,n);  //Calling the function
   for(i=0;i<n;i++)
   {
       printf("%d ",b[i]);  //Printing the squares
   }
   return 0;
}
