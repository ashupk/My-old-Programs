#include <stdio.h>
#define MAX_101

int main(void) {

	int k,i,j,x,n;
	scanf("%d",&k);
	int arr[k];
	for(i=0;i<k;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(arr[i] > arr[j])        //Sorting Arrays in Ascending Order.
			{
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
		}
	}
	n=arr[(k-1)/2];   //Getting the median
	printf("%d",n);



	return 0;
}
