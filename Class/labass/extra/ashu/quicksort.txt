#include<stdio.h>
#include<stdlib.h>

void quicksort(int arr[],int fst,int last)
{
    int i,j,pivot,tmp;
    if(fst<last)
    {
        pivot=fst;
        i=fst;
        j=last;
        while(i<j)
        {
            while((arr[i]<=arr[pivot])&&(i<last))
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j)
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        tmp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=tmp;
        quicksort(arr,fst,j-1);
        quicksort(arr,j+1,last);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("%d",arr[0]);
    for(i=1;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}
