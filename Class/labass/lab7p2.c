#include<stdio.h>

struct complex   // A structure Complex is defined
{
    float x;  //Real Part
    float y;  //Imaginary Part
};


int main()
{
    int n,i,j;
    scanf("%d",&n);   //Enter the number of complex numbers to be multiplied
    struct complex c[n];
    for(i=0;i<n;i++)    //For Scanning Complex numbers
    {
        scanf("%f",&(c[i].x));
        scanf("%f",&(c[i].y));
    }
    float real,imag;
    for(j=0;j<n-1;j++)
    {

        real=((c[j].x)*(c[j+1].x))-((c[j].y)*(c[j+1].y));  //Multiplication Algorithm
        imag=((c[j].x)*(c[j+1].y))+((c[j+1].x)*(c[j].y));
        (c[j+1].x)=real;
        (c[j+1].y)=imag;
    }
    printf("%0.2f ",real);
    printf("%0.2f",imag);    //Final Answer

    return 0;

}


