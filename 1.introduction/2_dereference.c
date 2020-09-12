#include <stdio.h>

int main(void){
	int value = 43;
	int *ptr;
	ptr = &value;

	/*
 	1. The pointer itself resides at a memory location
	2. The pointer contains the value of integer's memory location
	3. The value can be dereferenced by pointer with the usage of asterix
 	*/
	printf("&ptr \t= %p\n", &ptr);
	printf(" ptr \t= %p\n", ptr);
	printf("*ptr \t= %d\n", *ptr);

	return 0;
}
