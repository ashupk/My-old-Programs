/* Easier Solution */

#include<stdio.h>
int sum(int n)
{
    int next;
    if(n==-1) {return 0;}
    else{
    scanf("%d",&next);
    return (n+sum(next));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}


