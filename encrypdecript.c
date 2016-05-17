#include<stdio.h>
int main(){
int n,a;
char c;
printf("Enter the shift=",n);
scanf("%d",&n);
printf("For encription type 1 and for decription type 0\n");
scanf("%d",&a);
if(a==1) {

        while(c!='\n'){


    c=getchar();
    c=c+n;
    if(c>90){
        c=c-n;
        printf("%c",c);
    }
    else printf("%c",c);}
}
else if(a==0){while(c!='\n'){
    c=getchar();
    c=c-n;
    printf("%c",c);}
}
return 0;
}
