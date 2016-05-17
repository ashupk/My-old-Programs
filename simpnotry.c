#include<stdio.h>
#include<math.h>
int main(){
	int num,p=0,q=0,r=0,n,t;
	scanf("%d",&n);
	while(num%2!=0){
		num=num/2;
		r=r+1;
	}
	while(num%3!=0){
		num=num/3;
		p=p+1;
	}
	while(num%5!=0){
		num=num/5;
		q=q+1;
	}
	t=(pow(2,r))*(pow(3,p))*(pow(5,q));
	printf("%d",t);
    return 0;
}
