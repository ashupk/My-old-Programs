/* BigAdd
We are given two positive integers that can be larger than long
(assume maximum number of digits possible is 100). We would like
to add the numbers and return the addition of the two numbers.
Write a function that first takes in as input the number of digits
in the two numbers, then it takes in input the two numbers as character
arrays and returns the sum of the two numbers.

Input
3  5
100  99999

Output
100099                                                */

#include<stdio.h>
int main(){
int a1,a2;        //a1 and a2 are no. of digits of the two numbers respectively.
scanf("%d",&a1);
scanf("%d",&a2);
int num1[a1],num2[a2];  //num1[a1] and num2[a2] are the numbers which we have to add.
int i;
for(i=0;i<a1;i++){
    scanf("%d",num1[i]);
}
for(i=0;i<a2;i++){
    scanf("%d",num2[i]);
}
if(a1==a2){
        int n[a1];
        for(i=0;i<a1;i++){
    n[i]=num1[i]+num2[i];


printf("%d",n[i]);}

}
return 0;


}
