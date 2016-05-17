#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);      //Enter the dimension of the square matrix
    int matrix[n][n];
    int i,j,flag1=0,flag2=0,flag3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);   //Scanning the elements of the matrix
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i]<matrix[j] && matrix[i][j]==0)
            {
                flag1++;                //Checking for Upper Triangular
            }
            else if(matrix[i]>matrix[j] && matrix[i][j]==0)
            {
                flag2++;               //Checking for lower Triangular
            }
            else flag3=0;
        }
    }
    if(flag1==((n*n)-n)/2) printf("1");
    else if(flag2==((n*n)-n)/2) printf("1");
    else printf("0");
    return 0;

}
