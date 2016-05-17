#include <stdio.h>

int main()
{
    char char1,char2='$';
    int i=0;
    scanf("%c",&char1);  //Scanning first character
    while(1)
    {
        if((i==0)||(char2==' '))  //Condition for the first letter of a word, which we have to keep uppercase always.
            {
                if(char1>='a'&&char1<='z')
                    {
                        char1=char1-32;
                    }
                if(char2==' ')
                printf("%c",char2);
                i++;
            }
    else
    {
    if(char1>='A' && char1<='Z')  //For rest of the letters, which we have to keep in lowercase.
        {
            char1=char1+32;
        }

    }
    printf("%c",char1);
    scanf("%c",&char2);
    if(char2==' ')
    scanf("%c",&char1);
    else if(char2=='\n')
    break;
    else
        {
            char1=char2;
            char2='$';
        }
    }
printf("\n");
return 0;
}
