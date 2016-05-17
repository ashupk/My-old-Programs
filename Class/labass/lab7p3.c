#include<stdio.h>

int issafe(int, int);

int main()
{
  int n,k;
  scanf("%d",&n);  //Scanning the number of people in the team
  scanf("%d",&k);  //Scanning the index that has to be executed
  int safe;
  safe=issafe(n,k); //Person at the safe place
  printf("%d",safe); //Output
  return 0;
}

int issafe(int n,int k)  //Safe function is defined
{
    //Using Recursion
  int safe,answer;
  if (n==1)  //Base Case
  {
      return 1;
  }
  else
  {
      safe=issafe(n-1,k);
      answer=(safe+k-1)%n+1;  //The position of the safe person
      return answer;  //Returning the position.
  }

}
