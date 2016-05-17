#include<stdio.h>
int main(){
  char str[200];
  int i;
  printf("Enter any string->");
  scanf("%s",str);
  printf("The string is->%s",str);
  for(i=0;i<=strlen(str);i++){
            if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
  }
  printf("\nThe string in uppercase is->%s",str);
  return 0;
}
