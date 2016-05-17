/* BigAdd
We are given two positive integers that can be larger than long
(assume maximum number of digits possible is 100). We would like
to add the numbers and return the addition of the two numbers.
Write a function that first takes in as input the number of digits
in the two numbers, then it takes in input the two numbers as character
arrays and returns the sum of the two numbers.

Input
3  5
100  99999

Output
100099

Input
2  2
22  78

Output
100                                              */


#include<stdio.h>
void bigadd(char arr[], char arr[], char res[], int len)
{
    int temp=0,i,j=0;
    res[len+1]='\0';
    for(i=len-1;i>=0;i--)
    {
        temp=arr1[i]-'0' + arr2[i]-'0';
        res[i+1]+=temp%10;    //this might go over 10
        temp=temp/10;
        temp+=(res[i+1]-'0')/10;  // handles here, temp takes overflow
        res[i+1]='0'+(res[i+1]-'0')%10; //rest assigned here
        res[i]=res[i]+temp;
    }
    i=0; //now we remove extra-padding added to allow for overflow
    while(res[i]=='0')
    {
        j=i;
        while(res[j]!='\0')
        {

        }
    }
}

int main()
{
    char arr1[MAX], arr2[MAX], res[MAX];
    int i,len1,len2,len;
}
