#include<stdio.h>
void copy(int a[],int b[], int n)
{
    if(n==0) {return;}  //Base Case
    else{
        b[0]=a[0];
        copy(a+1,b+1,n-1);
    }
    return;
}
void merge(int a[],int n1,int b[],int n2,int c[])
{
    if(n1<=0 && n2<=0) {return;}
    if(n1<=0) copy(b,c,n2);
    if(n2<=0) copy(a,c,n1);
    if(a[0]<b[0])
    {
        c[0]=a[0];
        merge(a+1,n1-1,b,n2,c+1);}
        return;


}
int main()
{
    int n1;
    scanf("%d",&n1);
    int a[n1];
    int i;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n1+n2];
    merge(a[n1],n1,b[n2],n2,c[n1+n2]);
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
