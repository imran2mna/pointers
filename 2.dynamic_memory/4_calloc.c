#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void){
/*
====
NOTE
====
calloc() is similar to malloc() function.
There is no special difference.
*/	
	int* ptr = malloc(6 * sizeof(int));
	int* pi = (int*) calloc(6,sizeof(int));
	*(pi + 1) = 6;
	printf("value : %d \n", *(pi + 1));
	return 0;
}
