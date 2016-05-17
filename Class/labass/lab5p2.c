#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); //Enter the dimension of the matrix A
    int i,j,count=0,x,y;
    int mat[n][n],minor[n-1][n-1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]); //Scanning matrix A
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&minor[i][j]); //Scanning matrix B
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(x=0;x<n-1;x++)
            {
                for(y=0;y<n-1;y++)

                {
                    if(minor[x][y]==mat[i][j]){count++;}   //Matching the elements of matrix A and B
                }
            }
        }
    }
    if(count>=(n-1)*(n-1) && count<(n*n)) {printf("1");}  //Checking the minor
    else {printf("0");}
return 0;
}
