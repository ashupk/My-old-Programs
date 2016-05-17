#include<stdio.h>
int main() {
/*Reads length of input sequence. Prints YES if all positive
 * numbers in the sequence are in arithmetic progression else NO.
 */
    int lim,diff,n1,n2,ans=1,i=1;//i is counter, ans=1 if in arith progr.
    printf("Give length of sequence=");
    scanf("%d",&lim);
    if(lim<1) {printf("Illegal limit\n"); return 0;}
/* To start any checking we require at least three
 * non-negative integers. One or two positive integers
 * are always in arithmetic progression.
 */

//Read first non-negative integer
    while (lim>0) {
        printf("Give integer no. %d =",i++);
        scanf("%d",&n1); lim=lim-1;
        if (n1>-1) break;
    }
//Read second non-negative integer
    while (lim>0) {
        printf("Give integer no. %d =",i++);
        scanf("%d",&n2); lim=lim-1;
        if (n2>-1) break;
    }
//We have at least two non-negative integers so we can calculate diff.
    diff=n2-n1;
    n1=n2;
    while (lim>0) {
        printf("Give integer no. %d =",i++);
        scanf("%d",&n2); lim=lim-1;
        if (n2>-1) {
            if ((n2-n1)==diff) n1=n2;//check if arith progr holds
            else {ans=0; break;}//progr. does not hold so exit loop
        }
    }
    if (ans) printf("YES\n"); else printf("NO\n");
    return 0;
}
