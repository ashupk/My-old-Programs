#include <stdio.h>

int checksubsetsum(int a[], int n, int sum)
{
  if (sum == 0)    // Base Case

     return 1;

    if (n == 0 && sum != 0)

     return 0;

    if (a[n-1] > sum)   // If last element is greater than sum, then ignore it

    return checksubsetsum(a,n-1,sum);

   return checksubsetsum(a,n-1,sum-a[n-1]) || checksubsetsum(a,n-1,sum);
}


int main()
{


  int n;
  scanf("%d",&n);   //Scanning the number of numbers to be entered
  int sum;
  scanf("%d",&sum);  //Scanning the sum
  int arr[n];
  int i;
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);   //Scanning the array
  }
  if(checksubsetsum(arr,n,sum)==1)
  {
      printf("YES");
  }
  else printf("NO");



}
