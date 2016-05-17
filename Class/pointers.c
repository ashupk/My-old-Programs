#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char dest[500],src[500];
	int i=0,j=0;


	//scanf("%s",src);
	gets(src);
    for(i=0;src[i]!='\0';i++)
    {
        if((*(src+i)==' ') && (*(src+i+1)==' '))
        {
            continue;
        }
        else{
            *(dest+j)=*(src+i);
            j++;
        }
    }

    *(dest+j)='\0';
	for(i=0;dest[i]!='\0';i++)
	{
		printf("%c",dest[i]);
	}
	return 0;
}
