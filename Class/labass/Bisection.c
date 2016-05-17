#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double a,b,c,r[4],e1,e2,E=pow(10,-4);
    scanf("%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&r[0],&r[1],&r[2],&r[3]);

    double f(double x){
    double t;
    t=(a*x*x)+(b*x)+c;
    return t;
    }

    /*for(i=0;i<4;i++){
    f[i]=(a*pow(r[i],2))+(b*r[i])+c;
    }*/

    if((f(r[0]))*(f(r[1]))== -1 && (f(r[2]))*(f(r[3]))== -1){
    do{
        e1=(r[0]+r[1])/2;
        if(e1*r[1]== -1) r[0]=e1;
        else r[1]=e1;
    }
    while(fabs(f(r[2])-f(r[3]))<=E && (f(r[0]))*(f(r[1]))== -1);

    do{
        e2=(r[2]+r[3])/2;
        if(e2*r[3]==-1) r[2]=e2;
    }
    while(fabs(f(r[2])-f(r[3]))<=E && (f(r[2]))*(f(r[3]))== -1);

    }
    if(r[0]>r[2]){
        printf("%0.1lf",r[2]);
        printf("\n");
        printf("%0.1lf",r[0]);
    }
    else {
        printf("%0.1lf",r[0]);
        printf("\n");
        printf("%0.1lf",r[2]);
    }
return 0;

}
