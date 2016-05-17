#include<stdio.h>
int main()
{
    int i;
    char arr[4];
    int flag[10];
    for(i=0;i<10;i++)
    {
        flag[i]=0;
    }
    for(i=0;i<4;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
    if(arr[i]=='0' && flag[0]==0) {printf("zero\n"); flag[0]=1;}
    else if (arr[i]=='1' && flag[1]==0) {printf("one\n"); flag[1]=1;}
    else if (arr[i]=='2' && flag[2]==0) {printf("two\n"); flag[2]=1;}
    else if (arr[i]=='3' && flag[3]==0) {printf("three\n"); flag[3]=1;}
    else if (arr[i]=='4' && flag[4]==0) {printf("four\n"); flag[4]=1;}
    else if (arr[i]=='5' && flag[5]==0) {printf("five\n"); flag[5]=1;}
    else if (arr[i]=='6' && flag[6]==0) {printf("six\n"); flag[6]=1;}
    else if (arr[i]=='7' && flag[7]==0) {printf("seven\n"); flag[7]=1;}
    else if (arr[i]=='8' && flag[8]==0) {printf("eight\n"); flag[8]=1;}
    else if (arr[i]=='9' && flag[9]==0) {printf("nine\n"); flag[9]=1;}
    }

}
