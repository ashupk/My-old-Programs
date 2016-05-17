#include<stdio.h>

void quicksort(int a[],int low,int high)  //Quick Sort Function is defined
{
    int i,j;
    int ref;  //Assigning reference variable
    int tmp;  //Assigning Temporary variable to sort
    if(low < high)
    {
        ref=low;
        i=low;
        j = high;
        while(i<j)
        {
            while(a[i]<=a[ref] && i<= high)
            {
                i++;
            }
            while(a[j]>a[ref] && j>= low)
            {
                j=j-1;
            }
            if(i<j)
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        tmp=a[j];
        a[j]=a[ref];
        a[ref]=tmp;
        quicksort(a,low,j-1);  //Using Recursive algorithm for left part
        quicksort(a,j+1,high); //for right part
    }
}

    int main()
    {
        int n;
        scanf("%d",&n); //Scanning number of elements of array
        int arr[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);  //Scanning array elements
        }
        quicksort(arr,0,n-1); //Calling quicksort function
        printf("%d",arr[n-2]); //Printing second largest number
        return 0;


    }
