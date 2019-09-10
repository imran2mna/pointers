#include <stdio.h>
#include <stdlib.h>

int main(void){
	int* pi = (int*) malloc(sizeof(int));
	*pi = 5;
	printf("location : %p \t value : %d \n", pi, *pi);

	pi = (int*) malloc(sizeof(int));
	printf("location : %p \t value : %d \n", pi, *pi);
	
	return 0;

}
