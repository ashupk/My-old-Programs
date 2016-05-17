#include<stdio.h>
int main()
{
   int n,no=2,count=1;
   scanf("%d",&n);
   if(n==1)             //n=1 is taken as different case.
    {
      printf("1");
    }
   else
    {
      do
        {
         int num=no;
         while(num%2==0)   //Checks if number is divisible by 2
         {
            num=num/2;
         }
         while(num%3==0)   //Checks if number is divisible by 3
         {
            num=num/3;
         }
         while(num%5==0)   //Checks if number is divisible by 5
         {
            num=num/5;
         }
         if(num!=1)
         {
            no++;
            continue;
         }
         else
            {
              count++;
            }
         if(count==n)
         break;
         no++;
        }
      while(1);
    printf("%d",no);
     }
return 0;
}
