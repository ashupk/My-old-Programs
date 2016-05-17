#include <stdio.h>
void merge(int a[], int b[], int n1, int n2)
{
	int i,j=0,temp;
	int c[n1+n2];
	for(i=0;i<n1;i++)
	{
		if(a[i]<=a[i+1])
		{
			c[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n2;i++)
	{
		if(b[i]<b[i+1])
		{
			c[j]=b[i];
			j++;
		}
	}
	for(i=0;i<n1+n2;i++)
    {
        if(c[i]<=c[i+1])
        {
           c[i]=temp;
           c[i+1]=c[i];
           temp=c[i];

        }
    }

return;
}


int main(void) {
	// your code goes here
	int n1,n2,i;
	scanf("%d%d,&n1,&n2");
	int a[n1],b[n2],c[n1+n2];
	for(i=0;i<n1;i++){
	scanf("%d",&a[n1]);
	}
	for(i=0;i<n2;i++){
	scanf("%d",&b[n2]);
	}
	c[] = merge(a[n1],b[n2],n1,n2);
	for(i=0;i<n1+n2;i++){
	printf("%d",c[i]);}

	return 0;
}
