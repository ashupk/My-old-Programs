#include <stdio.h>

int issafe(int, int);

int main()
{
  int n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  int safe;
  safe=issafe(n,k);
  printf("%d",safe);
  return 0;
}

int issafe(int n,int k)
{
  int safe,answer;
  if (n==1)
  {
      return 1;
  }
  else
  {
      safe=issafe(n-1,k);
      answer=(safe+k-1)%n+1;
      return answer;
  }

}
