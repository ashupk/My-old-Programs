#include<stdio.h>
int main(){
int num,n,count=0;
scanf("%d",&n);
for(num=2;num++;count=n)
    {
    while(num%2!=0 && n!=1)
      {
        num=num/2;
      }
    while(num%3!=0 && n!=1)
      {
        num=num/3;
      }
    while(num%5!=0 && n!=1)
      {
        num=num/5;
      }
    count=count+1;
    printf("%d",num);
    }
    return 0;





}
