#include <stdio.h>

int main(void) {
	// your code goes here
	printf("THIS IS A PROGRAM FOR MULTIPLYING TWO MATRICES OF ORDER 5X5");
	printf("\n");
	int mat1[5][5],mat2[5][5],promat[5][5];
	int i,j,k;
	printf("\n");
	printf("ENTER THE FIRST MATRIX");
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n");
	printf("ENTER THE SECOND MATRIX");
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("\n");
	printf("THE PRODUCT MATRIX IS");
	printf("\n\n");
	for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            promat[i][j]=0;
        }
    }


	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				promat[i][j]=(mat1[i][k])*(mat2[k][j])+promat[i][j];
			}
		}
	}
	for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        {
            printf("%d ",promat[i][j]);
        }

    }


	return 0;
}
