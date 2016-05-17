#include<stdio.h>
int main()
{
int d1,d2,m1,m2,y1,y2;
scanf("%d ",&d1);
scanf("%d ",&m1);
scanf("%d\n",&y1);
scanf("%d ",&d2);
scanf("%d ",&m2);
scanf("%d",&y2);
if(y1>y2){printf("Ram");}
else if(y1<y2){printf("Shyam");}
else if(y1==y2)
      {if(m1>m2) {printf("Ram");}
      else if(m1<m2) {printf("Shyam");}
      else if(m1=m2) {
      if(d1>d2) {printf("Ram");}
      else printf("Shyam");  }

      }

}
