#include<stdio.h>

int isPrime(int n, int k)
{
    if(k==1) return 1;
    if(n%k==0) {return 0;}
    else return isPrime(n,k-1);
}
int main()
{
    int n;
    scanf("%d",&n);
}
