#include <stdio.h>

int main(void){
	int value = 43;
	int *ptr;
	ptr = &value;

	printf("&ptr \t= %p\n", &ptr);
	printf(" ptr \t= %p\n", ptr);
	printf("*ptr \t= %d\n", *ptr);

	return 0;
}
