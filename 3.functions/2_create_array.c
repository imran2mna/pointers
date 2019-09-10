#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int* createArray(int size, int value){
	int* array = (int*) malloc(size * sizeof(int));
	int i;
	for(i=0; i < size; i++){
		array[i] = value;
	}
	
	return array;
}

int main(void){
	
	int* num = createArray(4,6);
	printf("value : %d \n", *(num + 1));

	return 0;
}
