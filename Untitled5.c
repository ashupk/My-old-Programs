#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char arr[1000000],brr[1000000];
    int i=0,j=0,count=0;
    int lj,li;
    while(1)   //scanning 1st array
    {

        scanf("%c",&arr[i]);
        if(arr[i]=='\n') {break;}
        i++;
    }
    while(1)   //scanning 2nd array
    {
        scanf("%c",&brr[j]);
        if(brr[j]=='\n') {break;}
        j++;
    }

    lj=strlen(brr);
    li=strlen(arr);
    for(i=0;i<li-1;i++)
    {
        if(arr[i]==brr[0])
            {
                for(j=1;j<lj-1;j++)
                {
                    if((arr[i+j])!=brr[j]) break;
                    if(j==lj-2) {count++;}
                }

            }
        }



    printf("%d",count);


    return 0;
}

