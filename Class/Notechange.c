/* Note Change
You are given an unlimited number of notes of the following denominations
1000, 500, 100, 50, 10, 5, 2, 1
You are then given an integer number
Implement a program that gives the number of various notes required of
each denomination. There are multiple ways of combining various notes
to obtain the same amount. Therefore use the method that uses the highest
number of notes of a higher denomination before using notes of a lower
denomination.

As input you receive a positive integer number amount A as input.
As output you have to specify the notes from higher denomination
to lower denomination separated by a space.

Sample Input
1234

Sample Output
1  2 3 1  (1 note of 1000, 2 notes of 100, 3 notes of 10, 2 notes of 2)           */

#include<stdio.h>
int main()
{
    int A,arr[8],i;
    scanf("%d",&A);
    arr[0]=A/1000;
    A=A%1000;
    arr[1]=A/500;
    A=A%500;
    arr[2]=A/100;
    A=A%100;
    arr[3]=A/50;
    A=A%50;
    arr[4]=A/10;
    A=A%10;
    arr[5]=A/5;
    A=A%5;
    arr[6]=A/2;
    A=A%2;
    arr[7]=A/1;
    A=A%1;
    for(i=0;i<8;i++){
    printf("%d ",arr[i]);}
    return 0;
    }


