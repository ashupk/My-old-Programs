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
    scanf("%s",ch);
    if(checkpalindrome(ch)==1) printf("The word is a palindrome");
    else printf("The word is not a palindrome");
    return 0;



}
