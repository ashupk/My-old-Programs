#include<stdio.h>
int index(int a[],int key,int n)
{
	if(a[0]==key) {return 0;}
	else if(n>1)
	{
	  return (1+index(a+1,key,n-1));
    }
    else return(-1);
}
int main(){
	int n,p;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key);
	p=index(a,key,n);
	printf("%d",p);
	return 0;
}
