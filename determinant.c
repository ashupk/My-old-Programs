#include<stdio.h>
long determinant(long matrix[][], int n)  //Function for finding determinant of an n X n matrix
{
    int i,j,sign;
    long det=0.0;
    if (n==1) {return matrix[0][0];}
    else
    {
        for(j=0;j<n;j++)
        {
            if(j%2==0) {sign=1;}
            else sign= -1;
            det=det+((matrix[0][j])*(sign)*minor(matrix[0][j],n));
        }
    }
    return det;
}

long minor(long mat[][], int n)
{
    int i,j,x,y;
    int count=0,flag;
    long min[n-1][n-1];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(x=0;x<n-1;x++)
            {
                for(y=0;y<n-1;y++)

                {
                    if(min[x][y]==mat[i][j]){count++;}   //Matching the elements of matrix A and B
                }
            }
        }
    }
    if(count>=(n-1)*(n-1) && count<(n*n)) {flag=1;}  //Checking the minor
    else {flag=0;}
    if(flag==1) { return determinant(min[x][y], n-1);}
    else return 0;
}



int main()
{
    int n;
    scanf("%d",&n); //Enter the dimension of the matix
    int i,j;
    long mat[n][n];
    long inv[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%lf",&mat[i][j]);
        }
    }
    int p=determinant(mat[n][n],n);
    printf("%lf",p);


}
