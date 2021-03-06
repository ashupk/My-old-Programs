#include<stdio.h>
#include<stdlib.h>

int merge(int arr[],int l,int m,int h)
{
    int arr1[10000],arr2[10000];
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=h-m;

    for(i=0;i<n1;i++)
    {
        arr1[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        arr2[j]=arr[m+j+1];
    }

    arr1[i]=99999;
    arr2[j]=99999;
    i=0; j=0;

    for(k=l;k<=h;k++)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i++];
        }
        else
        {
            arr[k]=arr2[j++];
        }
    }

    return 0;
}

int mergesort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    return 0;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);

    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
