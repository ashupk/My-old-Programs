#include<stdio.h>
void merge(int a[],int b[],int n1,int n2)
{
    int temp[10];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=b[j++];
        }
    }
    if(i<n1){   // if b[]
        while(i<n1){
            temp[k++]=a[i++];
        }
    }
    else{  //if a[] got over, copy the remaining elts of b[] into the output
        while(j<n2){
            temp[k++]=b[j++];
        }
    }
    //Now copy temp back into a
    for(i=0;i<k;i++){
        a[i]=temp[i];
    }
    return;
}

int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[n1]);
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[n2]);
    }
    return 0;
}
