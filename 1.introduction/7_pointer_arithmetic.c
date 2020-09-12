#include <stdio.h>

int main(void){
	/*
 	Array is a contiginous memory defined by number elements and the variable name itself
	a pointer the starting element of the array.
 	*/
	int vector[] = {28, 41, 7};
	int *pi = vector;

	printf("%d\n", *pi);
	
	// add value before pointer arithmetic, later pointer arithmetic
	*(pi + 1) += 3;	pi += 1; (*pi) += 2; 
	printf("%d\n", *pi);

	// step by step pointer moves to other element, the data type automatically set next element. 	
	pi += 1;
	printf("%d\n", *pi);

	return 0;
}
