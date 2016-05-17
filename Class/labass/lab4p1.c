#include <stdio.h>

int main() {

	int k,i,count,j;
	scanf("%d",&k);  //Scanning the size of array
	int arr[k];
	for(i=0;i<k;i++)
	{
		scanf("%d",&arr[i]); //Now scanning the numbers
	}
	for(j=0;j<=10;j++){
	count=0;
	for(i=0;i<k;i++)
	{
		if(arr[i]==j)
		{
			count++;
		}

	}

    if(count!=0)
        {
            printf("%d %d",j,count);
            printf("\n");
        }

	}


	return 0;
}
