#include<stdio.h>

void merge(int a[],int b[],int n1,int n2){

	int temp[10];
	int i=0,j=0,k=0;
	while(i<n1 && j<n2){

		if(a[i]<b[j]){
			temp[k]=a[i];
		}
		else {
		temp[k]=b[j];}
        k++; i++;

	}
	if(i<n1){
		while(i<n1){
			temp[k]=a[i];
            k++; i++;
		}
	}

	else{
				while(j<n2){
					temp[k]=b[j];
					k++; j++;
				}
			}


		for(i=0;i<k;i++){
		a[i]=temp[i];
	}

	return;




	}




int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){

		scanf("%d",&arr[i]);

	}

	int j=0;
	int subarray=1; //subarray=step
	while(subarray<n){

		for(i=0;i<n;i=i+2*subarray){
			merge(arr+i,arr+i+subarray,subarray,subarray);
		}

		subarray=subarray*2;
	}
		for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}


}
