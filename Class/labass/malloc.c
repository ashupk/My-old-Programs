#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *StrDup(char *str)
{
    char *dest=0;
    int i=0,len=0;
    for(i=0;str[i]!='\0';i++)
    len=i;
    dest=(char *)malloc((len+1)*sizeof(char));
    for(i=0;str[i]!='\0';i++)
    {
    	dest[i]=str[i];
    }
    dest[i]='\0';

    return dest;
}


int main(void) {
	// your code goes here
	char *str="Winter is coming";
	char *copy;

	copy=StrDup(str);
	puts(copy);
	free(copy);
	copy=0;
	return 0;
}

