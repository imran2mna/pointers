#include <stdio.h>

int main(void){

	int vector[] = {28, 41, 7};
	int *pi = vector;

	printf("%d\n", *pi);
	
	// add value before pointer arithmetic, later pointer arithmetic
	*(pi + 1) += 3;	pi += 1; (*pi) += 2; // displays 46
	printf("%d\n", *pi);
	
	pi += 1;
	printf("%d\n", *pi);

	return 0;
}
