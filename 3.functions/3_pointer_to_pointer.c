#include <stdio.h>
#include <stdlib.h>



/*
====
NOTE
====
The arr variable is created inside function as copy of value containing passed address,
the assignment only valid inside function scope, after destruct.
Therefore returning is nil.
*/
void allocateArrayOne(int *arr, int size, int value) {
	arr = (int*) malloc (size * sizeof(int));
	if(arr != NULL) {
		for(int i=0; i < size; i++){
			*(arr + i) = value;
		}
	}
}


/*
====
NOTE
====
The arr variable is pointer to address of holding pointer,
the assignment will override the actual value contained in pointer.
*/
void allocateArrayTwo(int **arr, int size, int value) {
	*arr = (int*) malloc(size * sizeof(int));
	if(*arr != NULL) {
		for(int i=0; i < size; i++){
			*(*arr + i) = value;
		}
	}
}

int main(void){
	int* vector = NULL;
	allocateArrayOne(vector, 5, 6);
	printf("Calling first function : %p\n", vector);
	allocateArrayTwo(&vector, 5, 6);
	printf("Calling second function : %p\n", vector);
	return 0;
}
