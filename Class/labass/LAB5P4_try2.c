#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);   //Scanning number of sorted arrays
    int i,j,m[n],arr[10000],c=0,num[10000],temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        for(j=0;j<m[i];j++)
        {
            scanf("%d",&arr[j]);   //Scanning the numbers
            num[c]=arr[j];
            c++;
        }

    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(num[i]>=num[j])   //Sorting of arrays
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("%d",num[0]);
    for(i=1;i<c;i++)
    {
        printf(" %d",num[i]);   //Printing the arrays
    }


return 0;


}
