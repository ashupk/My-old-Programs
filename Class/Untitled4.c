#include<stdio.h>
int binarysearch(int a[], int low, int high, int key)  //Function for binary search is defined
{
    int mid;
    if(high<low) {return -1;}  //Base Case
    mid=(high+low)/2;
    if(key==a[mid]) {return mid;}       //if key is middle term, mid will be returned
    else if (key<a[mid]) {return binarysearch(a,low,mid-1,key);}
    else if (key>a[mid]) return binarysearch(a,mid+1,high,key);

}
int main()
{
    int n,count=0;
    scanf("%d",&n);     //Enter the size of array
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  //Enter the array elements
    }
    int key;
    scanf("%d",&key);  //Enter the key to be searchedf
    for(i=0;i<n;i++)
    {
        if(key==a[i]) {count++;}
    }
    if(count<1)
    {
    int b;
    b=binarysearch(a,0,n-1,key);
    printf("%d",b); // Printing the output...
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(key==a[i]) {break;}
        }
        printf("%d",i);  //Printing for another case
    }
    return 0;
}
