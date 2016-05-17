#include<stdio.h>
int main()
{
    int size,i,j=0,k=1;
    scanf("%d",&size);
    int arr[size],brr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++)
    {
        if(arr[i]<arr[0])
        {
            brr[j]=arr[i];
            j++;
        }
        else if(arr[i]>arr[0])
        {
            brr[size-k]=arr[i];
            k++;
        }

    }
    brr[j]=arr[0];
    for(j=0;j<size;j++)
        {
            printf("%d ",brr[j]);
        }
}
