#include<stdio.h>
int revInt(int n){
int revInt=0,d,sign=1,revn=0;
if(n<0) sign=-1;
n=n*sign;
do{
   d=n%10;
   revn=revn*10+d;
   n=n/10;
}

while(n!=0);
return(revn*sign);
}

int main()
{
int t,i,n1,n2;
scanf("%d", &t);
for(i=0;i<t;i++){
scanf("%d%d", &n1,&n2);
int rn1=revInt(n1), rn2=revInt(n2);
printf("%d\n", rn1+rn2);

}
return 0;
}
