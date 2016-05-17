/* Recursive Squaring */

#include <stdio.h>

void squares ( int a[], int b[], int n )
{
	int i;

	if (n == 0){
		return;
	}

	b[0] = a[0]*a[0];
	squares(a+1, b+1, n-1);
}
void print_array (int array[], int n)
{
	int i=0;
	for ( i = 0; i< n; i++ ){
		printf("%d ", array[i]);
	}
	printf("\n");
	return;
}
int main()
{
	int a[] = {1, 2, 3, 4};
	int b[4];

	squares(a,b,4);
	print_array(b,4);
}
