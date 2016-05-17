#include<stdio.h>
#include<string.h>

struct list
{
    char name[100];
    char authors[10][100];
    int year;
};



struct list a[100]
{
    int p,j;
    scanf("%d",&p);
    for(j=0;j<p;j++)
    {
        int i,n;
        scanf("%s",a[p].name);
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",a[p].authors[i]);
        }
        scanf("%d",&a[p].year);
    }
};
