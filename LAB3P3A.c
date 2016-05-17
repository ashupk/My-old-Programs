#include<stdio.h>
#include<math.h>   //To use pow function
int main()
{
    int n,l,h,i;
    scanf("%d",&n);  //Degree of the polynomial
    scanf("%d",&l);  //Lower Limit of Integration
    scanf("%d",&h);  //Upper Limit of Integration
    int coeff[n+1];  //Coefficients of the polynomial
    for(i=0;i<=n;i++)
    {
        scanf("%d",&coeff[i]);
    }
    double a=0,j,p,w=0.5,e=pow(10,-4),b=0,area,g;
    int k=0,y=0;
    for(i=n;i>=0;i--)
    {
        j=((coeff[k])*(((pow(h,(i+1)))/(i+1))-((pow(l,(i+1)))/(i+1))));  //Definite Integration, Term by Term
        k=k+1;
        a=a+j;
    }

    while((a-area)>=e){
    for(l=l;l<=h;l=l+w)
    {
        for(i=n;i>=0;i--)
        {
        p=((coeff[y])*pow(l,i));
        y=y+1;
        b=b+p;
        }
    }
   area=(p*w);
   w=w/2;

   }


   printf("%0.4lf",w);
    return 0;
}
