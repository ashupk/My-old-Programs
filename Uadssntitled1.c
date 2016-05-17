#include<stdio.h>

int nextPrime(int a) {
int k;

    a++;
    for(k=2;k<a;k++)
        {
            do{
                a++;
            }
            while(a%k!=0);
        }
        printf("%d ",a );
        return;
}
void findPrimeFactor(int n){
int d=2;
if(n==1){
    printf("No Prime Factors");
    return;
}
do{
    if(n%d==0){printf("%d ",d);
    n=n/d;}
    else d=nextPrime(d);
    return;
}
    while(n!=1);



}
int main()
{
    int n;
    printf("Give the +ve integer n=");
    scanf("%d",&n);
    findPrimeFactor(n);
return 0;
}



