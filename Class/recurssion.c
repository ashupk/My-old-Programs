#include<stdio.h>
/*int product_of_array_elts(int arr[],int n)
{

}*/
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[n]);
    }
    int pro=1;
    for(i=0;arr[i]!=-1;i++)
    {
        pro=(pro*arr[i]);
    }
    printf("%d",pro);
    return 0;
}
