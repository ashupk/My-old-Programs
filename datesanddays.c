#include<stdio.h>
#include<math.h>

int main()
{
int d1,m1,y1,d2,m2,y2;
int dd1,dd2,i,a,t;


scanf("%d",&d1);
scanf("%d",&m1);
scanf("%d\n",&y1);
scanf("%d",&d2);
scanf("%d",&m2);
scanf("%d",&y2);
a=y1;
if(y1>y2)
a=y2;
dd1=0;
dd1=othercases(m1);
for(i=a;i<y1;i++)
{
	if(i%4==0)      //For Leap Year
	dd1=dd1+1;
}
dd1=dd1+d1+(y1-a)*365;
dd2=0;
for(i=a;i<y2;i++)
{
	if(i%4==0)        //For Leap Year
	dd2=dd2+1;
}
dd2=othercases(m2)+dd2+d2+((y2-a)*365);
t=1+abs(dd2-dd1);   //One is added as dates are included in 't'.
printf("%d",t);
}
int othercases(x)       //Taken for other cases.
{  int y=0;
switch(x)
{
case 1: y=0; break;
case 2: y=34; break;
case 3: y=59; break;
case 4: y=90; break;
case 5: y=120;break;
case 6: y=151; break;
case 7: y=181; break;
case 8: y=212; break;
case 9: y=243; break;
case 10:y=273; break;
case 11:y=304; break;
case 12:y=334; break;
default: exit(1);
}
return(y);
}



