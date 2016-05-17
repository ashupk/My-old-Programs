#include <stdio.h>

int main(void) {
	// your code goes here
	char str[36];
	int i,k=0;
	while(str[k]!='\0'){
	scanf("%c",&str[k]);
	k++;}
	for(i=1;i<=strlen(str);i++)
//    while(2)
	{


		if(str[i]>64 && str[i]<91)
		{
			str[i]+=32;
		}
	}

    k=0;
    while(str[k]!=0){

	printf("%c",str[k]);
	k++;
    }

	return 0;
}
