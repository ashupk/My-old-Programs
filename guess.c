#include<stdio.h>
int main() {
    int n,ans,llim=1,rlim=10000,mid;
    printf("Choose an integer >1 and < 10000.\nAnswer the questions the program asks you.\nIn 14 questions the program will guess the integer\n\n");

    for (n=1;n<15;n=n+1) {
        printf("%d %d\n",llim,rlim);
        mid=(llim+rlim)/2;
        printf("Q%d. Is the number less than %d?\nEnter 1 if true 0 if false=\t",n,mid);
        scanf("%d",&ans);
        if (ans) rlim=mid; else llim=mid;
    }
    printf("NUMBER IS %d\n",llim);
}
