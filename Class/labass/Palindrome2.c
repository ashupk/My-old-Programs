#include <stdio.h>
#include <string.h>
int main() {
	int t,i,j;
	char arr[100];
	scanf("%d",&t);
	int count[t];
	for(j=1;j<=t;j++){count[j]=0;}
	for(j=1;j<=t;j++) {
		scanf("%s",arr);

		for(i=0;arr[i]!='\0';i++) {

			if(arr[i]>arr[strlen(arr)-i-1])
			count[j]+=(arr[i]-arr[strlen(arr)-i-1]);

		}}
		for(j=1;j<=t;j++){
		printf("%d\n",count[j]);
	}
	return 0;
}
