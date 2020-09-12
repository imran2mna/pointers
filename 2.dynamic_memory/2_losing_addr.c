#include <stdio.h>
#include <stdlib.h>

int main(void){
	int* pi = (int*) malloc(sizeof(int));
	*pi = 5;
	printf("location : %p \t value : %d \n", pi, *pi);

/*
====
NOTE
====
Without freeing the memory location, allocating memory location 
through malloc() function pointed by same pointer.
*/
	pi = (int*) malloc(sizeof(int));
	*pi = 7;
	printf("location : %p \t value : %d \n", pi, *pi);
	
	return 0;

}
