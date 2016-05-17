#include<stdio.h>
int main()
{
    int size,count1=0,count2=0;
    scanf("%d",&size);
    int i,a[size],j=0,b[100],c[100],k=0;
    int final[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    do{
        b[j]=a[j+1];
        j=j+1;
        count1++;
    }
    while(a[0]>a[j+1]);

    do{
        c[k]=a[k+1];
        k=k+1;
        count2++;

    }
    while(a[0]<a[k+1]);


    for(i=0;i<count1;i++){

        final[i]=b[i];
    }
    final[count1]=a[0];
    for(i=count1+1;i<size;i++){
        final[i]=c[i-count1-1];

    }
    for(i=0;i<size;i++){
        printf("%d ",final[i]);
    }

    return 0;
}
