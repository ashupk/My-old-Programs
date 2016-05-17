#include<stdio.h>
int factorial(int n)
{
    if(n==0){return 1;}
    else
    {
    int i;
    i=n*factorial(n-1);   //using recursion
    return i;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;

}
