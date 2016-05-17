#include<stdio.h>

struct point
{
    int x;
    int y;
};
//struct point *ptr;
//ptr=(struct point*)malloc(sizeof(struct point));
typedef struct point pt;
struct rect
{
    pt lt;
    pt rb;
};
int main()
{
    int N,i;
    struct rect* rarr;
    scanf("%d",&N);
    rarr=(struct rect*)malloc(sizeof(struct rect)*N);
    for(i=0;i<n;i++)
    {
        scanf("%d",&rarr[i],lt.x);
    }

}


