#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }



        for(i=1;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(matrix[i][j]!=0) {printf("0"); break;}

            }
        }





        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(matrix[i][j]!=0){printf("0"); break;}
            }
        }

    for(i=1;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(matrix[i][j]!=0) {printf("0"); break;}

            }
        }


    return 0;

}
