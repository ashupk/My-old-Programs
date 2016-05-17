#include<stdio.h>
int main()
{
    int dot_product(int a[],int b[], int size)
    {
        int i,sum=0;
        int dot;
        for(i=0;i<size;i++)
        {
           dot=(a[i])*(b[i]);
           sum=sum+dot;
        }
    return sum;
    }
    int main()
    {
        int size;
        int p,i;
        scanf("%d",&size);
        int a[size],b[size];
        for(i=0;i<size;i++)
        {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        }
        p=dot_product(a[size], b[size], size);
        printf("%d",p);
    }
    return 0;
}
