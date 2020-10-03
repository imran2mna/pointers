#include <stdio.h>

int number_linux = 5;

int main(void){
	int vector [] = {1, 2, 3, 4, 5 };
	int* pv = vector;
	printf("vector : %p\n", vector);
	printf("pv     : %p\n", pv);
	printf("&vector[0] : %p\n", &vector[0]);
	return 0;
}
