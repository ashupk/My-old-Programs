#include<stdio.h>

struct person
{
    char* first;
    char* last;
};

int isprefix(char*,char*)
int main()
{
    int n,i;
    struct person*parr;
    char* str;
    scanf("%d",&n);
    parr=(struct serson*)malloc(sizeof(struct person)*n);
    for(i=0;i<n;i++)
    {
        scanf("%ms %ms",&parr[i].first,&parr[i].last);
    }
    scanf("%ms",&str);
    for(i=0;i<n;i++)
    {
        if(isprefix(str,parr[i].first) || isprefix(str,parr[i].last))
        printf("%s%s\n",parr[i].first,parr[i].last);
    }
    for(i=0;i<n;i++)
    {
        free(parr[i].first);
        free(parr[i].last);
    }
    free(parr);
    return 0;





}
int isprefix(char*str, char*name)
{
    if(strncmp(str,name, strlen(str))==0)
    {
        return 1;
    }
    else
    {
       return 0;
    }

}
