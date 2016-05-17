#include<stdio.h>
int main()
{
    int n,i,j,size=0,temp;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        int numbers[m[n]];
        for(j=0;j<m[n];j++)
        {
            scanf("%d",&numbers[m[n]]);
        }
    }


   /* for(i=0;i<n;i++)
    {
        size=size+m[i];
    }
    int arr[size];

    for(j=0;j<size;j++)
    for(i=0;i<m[j];i++)
    {
        arr[i]=numbers[m[i]];
    }
    for (i=0; i<size;i++)
    {
        for (j=i+1;j<m[i];j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }*/


}
