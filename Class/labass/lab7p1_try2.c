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
    float m1;
    float m2;
    float temp_x[100000];
    float temp_y[100000];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int k=0;
            m1=((p[i].y2)-(p[i].y1))/((p[i].x2)-(p[i].x1));    //Slope of first line segment
            m2=((p[j].y2)-(p[j].y1))/((p[j].x2)-(p[j].x1)); //Slope of second line segment
            float a1,b1,c1,a2,b2,c2,k1_x,k1_y,k2_x,k2_y;
            a1=m1;b1=-1;c1=(m1*(p[i].x2))-(p[i].y2);  //Coefficients of first line
            a2=m2;b2=-1;c2=(m2*(p[j].x2))-(p[j].y2);  //Coefficients of second line
            if((b1*a2)!=(b2*a1) && (a1*b2)!=(a2*b1))
            {
                temp_x[k]=((c1*b2)-(c2*b1))/((a1*b2)-(a2*b1)); //x part of solution
                temp_y[k]=((a2*c1)-(a1*c2))/((b1*a2)-(b2*a1)); //y part of solution
                k1_x=((p[i].x1)-temp_x[k])/(temp_x[k]-(p[i].x2)); // Checking if the solution is for line segment
                k1_y=((p[i].y1)-temp_y[k])/(temp_y[k]-(p[i].y2)); // By using Section Formula
                k2_x=((p[j].x1)-temp_x[k])/(temp_x[k]-(p[j].x2));
                k2_y=((p[j].y1)-temp_y[k])/(temp_y[k]-(p[j].y2));
                if((a1*temp_x[k])+(b1*temp_y[k])==c1 && (a2*temp_x[k])+(b2*temp_y[k])==c2 && k1_x>=0 && k1_y>=0 && k1_x==k1_y && k2_x>=0 && k2_y>=0 && k2_x==k2_y)
                {
                    count++;
                }
            }
            k++;
        }

    }
    printf("%d",(count));
    return 0;
}
