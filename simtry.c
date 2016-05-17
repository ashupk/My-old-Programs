#include<stdio.h>
int main(){
    int n,count=1;
    int j,i=2;
    scanf("%d",&n);
    if(n==1)
        {
            j=1;   //For n=1 Case
        }
    else if(n==2)
        {
            j=2;   //For n=2 Case
        }

    else {         //For n>2 Case
        do {
            j=i;

        while(i%2==0)
        {
            i=i/2;
        }
        while(i%3==0)
        {
            i=i/3;
        }
        while(i%5==0)
        {
            i=i/5;
        }


        }
      while(count!=n);
      }

  printf("%d",j);
  return 0;
}
