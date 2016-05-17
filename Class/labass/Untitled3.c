#include<stdio.h>
int main(){
int i=0,overflow=0,j;
char arr1[100],arr2[100],arr3[100];
int ch=getchar();
while(ch!=EOF && i<100){

ch=getchar();
i++;
}
if(ch[0]<'9' && ch[0]<'5'){putchar(1);}
for(j=i-1;j>0;j--)
{
   if(ch[j]=='.') arr1[j]=arr2[j];
   }


    arr1[i]=(2*ch[i]-2*'0'+overflow)%10+'0';
    overflow=(2*ch[i]-2*'0'+overflow)/10;
    while(ch!=EOF){}
    putchar(ch);}

}
