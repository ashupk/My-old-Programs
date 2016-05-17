#include<stdio.h>
#include<string.h>
int checkpalindrome(char ch[])
{
    int i=0,count=0;
    int len=strlen(ch);
    while(i<len){
    if(ch[i]==ch[len-1-i]){count++;}

    i++;}

    if(count==strlen(ch)) return 1;
    else return 0;
}
int main()
{
    char ch[100];
    int t,i,j,count=0,len;
    scanf("%d", &t);
    for(j=0;j<t+1;j++)
    {
        while(1)
        {
            scanf("%c",&ch[i]);
            if(ch[i]=='\n') {break;}
        }
        len=strlen(ch);
        for(i=0;i<len-1;i++)
        {
            if(checkpalindrome(ch)==0) {break;}
            else {

               if(ch[len-1-i]!='a'){
               ch[len-1-i]=ch[len-1-i]-1;
               count++; }
               else{
                ch[len-i]=ch[len-i]-1;
               }

            }
        }




    }
    printf("%d",count);
    return 0;

}

