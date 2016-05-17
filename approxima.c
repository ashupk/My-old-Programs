#include<stdio.h>
#include<math.h>
int main()
{
    int l,h,n,i,j;
    double w=0.5,a,b=0;
    scanf("%d",&n);
    scanf("%d",&l);
    scanf("%d",&h);
    int coeff[n+1];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&coeff[i]);
    }
   double E=pow(10,-4),p=0,t;

   for(j=0;j<=n;j++)
   {
       for(i=n;i>=0;i--){
   t=(coeff[j])*pow(w,i);
   p=p+t;
   w=w/2;

   }}
   area=p*w;

}
