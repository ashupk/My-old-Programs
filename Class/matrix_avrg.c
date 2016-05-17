#include<stdio.h>
int main()
{
    int matrix[3][3],sqmat[3][3],a,b,c;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sqmat[i][j]=(matrix[i][j])*(matrix[i][j]);
        }
    }


       a=sqmat[1][1]+sqmat[2][2]+sqmat[0][0];
       b=sqmat[1][1]+sqmat[2][2]+sqmat[0][0];
       c=sqmat[1][1]+sqmat[2][2]+sqmat[0][0];
       float avg;
       avg=(a+b+c)/3;
       printf("%f",avg);


}
