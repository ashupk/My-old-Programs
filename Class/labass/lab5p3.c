#include<stdio.h>
#include<string.h>
int main()
{
    char DICT[4]="abcd",A[100],temp;
    scanf("%s",A); //Reading string A
    int len;
    len=strlen(A); //len = length of string A
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<4;j++)
        {
            if(A[i]==DICT[j])
            {
                if(j==1)      //When j=1
                {
                    temp=DICT[j];
                    DICT[1]=DICT[0];
                    DICT[0]=temp;
                    printf("%d",j);
                }
                else if(j==2)   //When j=2
                {
                    temp=DICT[j];
                    DICT[2]=DICT[1];
                    DICT[1]=DICT[0];
                    DICT[0]=temp;
                    printf("%d",j);
                }
                else if(j==3)   //When j=3
                {
                    temp=DICT[j];
                    DICT[3]=DICT[2];
                    DICT[2]=DICT[1];
                    DICT[1]=DICT[0];
                    DICT[0]=temp;
                    printf("%d",j);
                }
                else printf("%d",j);
            }

        }
    }
    return 0;
}
