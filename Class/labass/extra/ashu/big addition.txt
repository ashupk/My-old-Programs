#include <stdio.h>
#define MAX 100

void bigadd( char arr1[], char arr2[], char res[], int len)
{
	int tmp=0, i, j=0;
	res[len+1]='\0';
	for( i=len-1; i>=0; i--) {
		tmp = arr1[i]-'0' +arr2[i]-'0';
		res[i+1] += tmp%10;  // this might go over 10
		tmp = tmp/10;
		tmp += (res[i+1]-'0')/10; // handled here, tmp takes overflow
		res[i+1] ='0'+ (res[i+1]-'0')%10; //rest assigned here
		res[i] = res[i]+tmp;
	}
	i=0; // now we remove extra-padding added to allow for overflow
	while( res[i] =='0')
	{
		j=i;
		while( res[j] != '\0')
			{
				res[j] = res[j+1];
				j++;
			}
	}
	return;
}

int main()
{
	char arr1[MAX], arr2[MAX], res[MAX];
	int i, len1, len2, len;
	for(i =0; i<MAX; i++) arr1[i] = arr2[i] = res[i] = '0'; //initialized all arrays to zero
	printf(" input length of number 1 and number 2\n");
	scanf(" %d %d",&len1, &len2);
	len = (len1 > len2 ? len1: len2);

	for( i=0; i<len1; i++) scanf("%1s", &arr1[ len - len1+i ]);
	for( i=0; i<len2; i++) scanf("%1s", &arr2[ len - len2+i ]);
	bigadd(arr1, arr2, res, len);
	printf(" %s + %s = %s\n", arr1, arr2, res);

	return 0;
}
