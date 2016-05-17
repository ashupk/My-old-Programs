#include<stdio.h>

int sumofdigits(int a){    /* Defining a function to find the sum of digits of a number */
int b,sum=0;
while(a){
b=a%10;
a=a/10;
sum=sum+b;}
return sum;
}

int difference(int a){    /* This function is used for testing the divisibility by 11 */
int sumOdd=0,sumEven=0,diff;
while(a!=0){
sumOdd=sumOdd+(a%10);
a=a/10;
sumEven=sumEven+(a%10);
a=a/10;
}
diff=sumOdd-sumEven;
return diff;
}





int main(){
int m,n;
int t,p;
scanf("%d\n",&m);
scanf("%d",&n);

if(n==2){                         // Divisibility Test for 2
t=m%10;
if(t%2==0) printf("YES");
else printf("NO");
}
else if(n==3){                     // Divisibility Test for 3
if(sumofdigits(m)%3==0) printf("YES");
else printf("NO");
}
else if(n==5){                     // Divisibility Test for 5
if(m%10==5||m%10==0) printf("YES");
else printf("NO");
}
else if(n==6){                     // Divisibility Test for 6
if(m%2==0&&m%3==0) printf("YES");
else printf("NO");
}
else if(n==8){                     // Divisibility Test for 8
p=m%1000;
if(p%8==0) printf("YES");
else printf("NO");
}
else if(n==11){                     // Divisibility Test for 11
if(difference(m)%11==0) printf("YES");
else printf("NO");
}
else printf("-1");                  // When n is different from 2,3,5,6,8 and 11.
return 0;
}
