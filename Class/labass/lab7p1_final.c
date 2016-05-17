#include<stdio.h>

struct linesegment    //Structure is defined for line segment
{
    float x1;
    float y1;
    float x2;
    float y2;
};

typedef struct linesegment line;

int main()
{
    int n,count=0;
    scanf("%d",&n);   //Scanning number of line segments
    line p[n];
    int i,j;
    for(i=0;i<n;i++)     //Scanning line segments
    {
        scanf("%f",&(p[i].x1));
        scanf("%f",&(p[i].y1));
        scanf("%f",&(p[i].x2));
        scanf("%f",&(p[i].y2));
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            float m1;
            float m2;
            if(i!=j)
            {
                /* For the Case where both m1 and m2 are perfectly defined */
                if(((p[i].x2)!=(p[i].x1)) && ((p[j].x2)!=(p[j].x1)))
                {

                    m1=((p[i].y2)-(p[i].y1))/((p[i].x2)-(p[i].x1));    //Slope of first line segment
                    m2=((p[j].y2)-(p[j].y1))/((p[j].x2)-(p[j].x1)); //Slope of second line segment
                    float a1,b1,c1,a2,b2,c2;
                    a1=m1;b1=-1;c1=(m1*(p[i].x2))-(p[i].y2);  //Coefficients of first line
                    a2=m2;b2=-1;c2=(m2*(p[j].x2))-(p[j].y2);  //Coefficients of second line
                    float A1,B1,C1,D1;
                    A1=(a1*(p[j].x1))+(b1*(p[j].y1))-c1;
                    B1=(a1*(p[j].x2))+(b1*(p[j].y2))-c1;
                    C1=(a2*(p[i].x1))+(b2*(p[i].y1))-c2;
                    D1=(a2*(p[i].x2))+(b2*(p[i].y2))-c2;

                    if((A1*B1)<=0 && (C1*D1)<=0)
                        count++;
                }
                /* For the case where m2 is not defined */
                else if(((p[i].x2)!=(p[i].x1)) && ((p[j].x2)==(p[j].x1)))
                {
                    m1=((p[i].y2)-(p[i].y1))/((p[i].x2)-(p[i].x1));    //Slope of first line segment
                    float a3,b3,c3,a4,b4,c4;
                    a3=m1;b3=-1;c3=(m1*(p[i].x2))-(p[i].y2);  //Coefficients of first line
                    a4=1;b4=0;c4=(p[j].x1);
                    float A2,B2,C2,D2;
                    A2=(a3*(p[j].x1))+(b3*(p[j].y1))-c3;
                    B2=(a3*(p[j].x2))+(b3*(p[j].y2))-c3;
                    C2=(a4*(p[i].x1))+(b4*(p[i].y1))-c4;
                    D2=(a4*(p[i].x2))+(b4*(p[i].y2))-c4;

                    if((A2*B2)<=0 && (C2*D2)<=0)
                        count++;
                }
                /* For the case where m1 is not defined */
                else if(((p[i].x2)==(p[i].x1)) && ((p[j].x2)!=(p[j].x1)))
                {
                    m2=((p[j].y2)-(p[j].y1))/((p[j].x2)-(p[j].x1));    //Slope of first line segment
                    float a5,b5,c5,a6,b6,c6;
                    a5=m2;b5=-1;c5=(m2*(p[j].x2))-(p[j].y2);  //Coefficients of second line
                    a6=1;b6=0;c6=(p[i].x1);
                    float A3,B3,C3,D3;

                    A3=(a5*(p[j].x1))+(b5*(p[j].y1))-c5;
                    B3=(a5*(p[j].x2))+(b5*(p[j].y2))-c5;
                    C3=(a6*(p[i].x1))+(b6*(p[i].y1))-c6;
                    D3=(a6*(p[i].x2))+(b6*(p[i].y2))-c6;

                    if((A3*B3)<=0 && (C3*D3)<=0)
                        count++;
                }
            }


        }

    }


        printf("%d",(count/2));


    return 0;
}
