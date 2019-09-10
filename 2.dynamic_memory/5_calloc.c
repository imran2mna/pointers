#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void){
	
	int* ptr = malloc(6 * sizeof(int));
	memset(ptr,0, 6*sizeof(int));
	printf("value : %d \n", *(ptr + 1));

	int* pi = (int*) calloc(6,sizeof(int));
	printf("value : %d \n", *(pi + 1));
	return 0;
}
