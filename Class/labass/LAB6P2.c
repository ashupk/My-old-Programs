#include<stdio.h>

int fib(int n)           //Fibonacci Function is defined
{
    if(n==0 || n==1) {return 1;}    //Base Case
    else return (fib(n-1)+fib(n-2));  // Formulation by recursion
}

int main()

{
    int i,j,k=0;
    scanf("%d",&i);  //Give first number
    scanf("%d",&j);  //Give second number
    int count=0;
    while(fib(k)<=j)
    {
        if(fib(k)<j && fib(k)>i)
        {
            count++;  //Counting the no.
        }
        k++;
    }
    printf("%d",count);  //Printing the value
    return 0;

}
