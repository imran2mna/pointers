#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int* arr[5];

	for(int i=0; i<5; i++) {
		arr[i] = (int*) malloc(sizeof(int));
		*arr[i] = i*i;
	}

	for(int j=0; j<5; j++){
		printf("**(arr + %d) = %d\n",j, *(*(arr +j)));
	}

}
