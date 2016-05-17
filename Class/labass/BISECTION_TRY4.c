#include<stdio.h>
#include<math.h>
double f(double x,double a,double b,double c)
{
    double t;
    t=(a*x*x)+(b*x)+c;
    return t;
}
int main()
{
    double a,b,c,e1,e2,E=pow(10,-4);
    double c1,d1,c2,d2;
    char condition;

    scanf("%lf%lf%lf",&a,&b,&c);     //Scanning the coefficients of quadratic
    scanf("%lf%lf",&c1,&d1);
    scanf("%lf%lf",&c2,&d2);
    getchar();
    scanf("%c",&condition);

    if(condition=='a')             //For Case a
    {

        if(a!=0 && b==0 && c==0)
        {
            printf("0.0");
            printf("\n");
            printf("0.0");
        }

        else if(f(c1,a,b,c)==0 || f(d1,a,b,c)==0)
        {
        	do   //For getting the second root.
        {
            e2=(c2+d2)/2;

            if(f(e2,a,b,c)==0) {c2=e2; break;}
            else{
            if(f(e2,a,b,c)*f(c2,a,b,c) < 0)
            {
                d2=e2;
            }
            else c2=e2;}

        }
        while(fabs((fabs(c2)-fabs(d2))/fabs(c2))>=E);

        if(c1 < c2)
    {
        printf("%.1lf",c1);
        printf("\n");
        printf("%.1lf",c2);
    }
    else
    {
        printf("%.1lf",c2);
        printf("\n");
        printf("%.1lf",c1);
    }

        }
        else if (f(c2,a,b,c)==0 || f(d2,a,b,c)==0)
        {
        	do    //For getting the first root.
        {
            e1=(c1+d1)/2;
            if(f(e1,a,b,c)==0) {c1=e1; break;}
            else{
            if(f(e1,a,b,c)*f(c1,a,b,c) < 0)
            {
                d1=e1;
            }
            else c1=e1;}

        }
        while(fabs((fabs(c1)-fabs(d1))/fabs(c1))>=E);
        if(c1 < c2)
    {
        printf("%.1lf",c1);
        printf("\n");
        printf("%.1lf",c2);
    }
    else
    {
        printf("%.1lf",c2);
        printf("\n");
        printf("%.1lf",c1);
    }

        }
        else
        {
        do    //For getting the first root.
        {
            e1=(c1+d1)/2;
            if(f(e1,a,b,c)==0) {c1=e1; break;}
            else{
            if(f(e1,a,b,c)*f(c1,a,b,c) < 0)
            {
                d1=e1;
            }
            else c1=e1;}

        }
        while(fabs((fabs(c1)-fabs(d1))/fabs(c1))>=E);
        do   //For getting the second root.
        {
            e2=(c2+d2)/2;
            if(f(e2,a,b,c)==0){c2=e2; break;}
            else{
            if(f(e2,a,b,c)*f(c2,a,b,c) < 0)
            {
                d2=e2;
            }
            else c2=e2;}

        }
        while(fabs((fabs(c2)-fabs(d2))/fabs(c2))>=E);



    if(c1 < c2)
    {
        printf("%.1lf",c1);
        printf("\n");
        printf("%.1lf",c2);
    }
    else
    {
        printf("%.1lf",c2);
        printf("\n");
        printf("%.1lf",c1);
    }

    }
    }

    else if(condition=='b')   //For Case b
    {

        if(a!=0 && b==0 && c==0)
        {
            printf("0.0");
            printf("\n");
            printf("0.0");
        }

        else if(f(c1,a,b,c)==0 || f(d1,a,b,c)==0)
        {
           do    //For getting the second root.
        {
            e2=(c2+d2)/2;
            if(f(e2,a,b,c)==0){c2=e2; break;}
            else{
            if(f(e2,a,b,c)*f(c2,a,b,c) < 0)
            {
                d2=e2;
            }
            else c2=e2;}

        }
        while(fabs(f((c2+d2)/2,a,b,c))>=E);
         if(c1<c2)
    {
        printf("%.1lf",c1);
        printf("\n");
        printf("%.1lf",c2);
    }
    else
    {
        printf("%.1lf",c2);
        printf("\n");
        printf("%.1lf",c1);
    }
        }

        else if(f(c2,a,b,c)==0 || f(d2,a,b,c)==0)
        {
            do    //For getting the first root
        {
            e1=(c1+d1)/2;
            if(f(e1,a,b,c)*f(c1,a,b,c) < 0)
            {
                d1=e1;
            }
            else c1=e1;

        }
        while(fabs(f((c1+d1)/2,a,b,c))>=E);
        if(c1<c2)
    {
        printf("%.1lf",c1);
        printf("\n");
        printf("%.1lf",c2);
    }
    else
    {
        printf("%.1lf",c2);
        printf("\n");
        printf("%.1lf",c1);
    }
        }
        else{
        do    //For getting the first root
        {
            e1=(c1+d1)/2;
            if(f(e1,a,b,c)==0){c1=e1; break;}
            else{
            if(f(e1,a,b,c)*f(c1,a,b,c) < 0)
            {
                d1=e1;
            }
            else c1=e1;}

        }
        while(fabs(f((c1+d1)/2,a,b,c))>=E);
        do    //For getting the second root.
        {
            e2=(c2+d2)/2;
            if(f(e2,a,b,c)*f(c2,a,b,c) < 0)
            {
                d2=e2;
            }
            else c2=e2;

        }
        while(fabs(f((c2+d2)/2,a,b,c))>=E);

        if(c1<c2)
    {
        printf("%.1lf",c1);
        printf("\n");
        printf("%.1lf",c2);
    }
    else
    {
        printf("%.1lf",c2);
        printf("\n");
        printf("%.1lf",c1);
    }
    }
    }

return 0;

}
