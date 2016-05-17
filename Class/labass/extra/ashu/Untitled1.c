#include<stdio.h>
void f(int p,int q)
{
    return p+q;
}

int main()
{
    int i,n,a[50][50];
    int *p,*q;
    char *s;
    scanf("%d"&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=f(i,j);
    p=*(a+2);
    q=*(*(a+2)+2);
    printf("%u\n",p+q);
    s[0]='\0';
}
