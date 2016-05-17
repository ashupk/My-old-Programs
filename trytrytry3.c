#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char *str;
 int i=0,p,length=0,character;

 do
 {
  str[i]=getch();
    if(str[i]==13)
    break;
    length++;
   printf("%c",str[i]);
   i++;

 }while(1);

 printf("\n");
 for(i=0;i<length;i++)
   {
  if((int)str[i]<=122&&(int)str[i]>=97)
  {

   character=(int)str[i]-32;
   printf("%c",character);
  }
  else
  {
   printf("%c",str[i]);
  }

   }
 getch();
}
