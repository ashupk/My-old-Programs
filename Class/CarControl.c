#include<stdio.h>
int sumofdigits(int n)
{
    int a,b,c,d,sum;

    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=d%10;
    sum=a+b+c+d;
    return sum;
}
int main()
{
    int numofcars;
    int daynum,i,j,k,car[numofcars];
    int day[daynum];
    scanf("%d\n",&daynum);
    for(i=0;i<daynum;i++)
    {
        scanf("%d",day[i]);
    }
    scanf("%d",&numofcars);
    for(j=0;j<numofcars;j++)
    {
        scanf("%d",&car[j]);
    }
    for(k=0;k<numofcars;k++)
    {
        if(sumofdigits(car[k])%2==0 && day[k]%2==0)
        {
            printf("%d ",car[k]);
        }

    }
    return 0;
}
