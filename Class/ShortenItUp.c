#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int len,i;
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
       {
           ch[i]=ch[i+1];
       }
       else {ch[i]=ch[i];}
    }
    ch[len-1]='\0';
    printf("%s",ch);
    return 0;
}
