#include<stdio.h>
void swap(int *a, int *b)
{
    int *temp=a;
    a=b;
    b=temp;
    return;

}
int main()
{
    int i,j;
    i=1;
    j=2;
    swap(&i,&j);
    printf("%d %d",i,j);
    return 0;
}
