#include <stdio.h>

/*
====
NOTE
====
The 'int arr[]' is a pointer passed into function.
If you run this program, the outputs are identical.
no difference :)
*/

void printArray(int arr[], int size) {
	// In here, we need to pass the array size ;)
	for(int i=0; i < size; i++) {
		printf("&arr[%d] = %p, arr[%d] = %d\n",i, &arr[i],  i, arr[i]);
	}
}



void displayArray(int *arr, int size) {
	for(int i=0; i < size; i++) {
		printf("(arr + %d) = %p, *(arr + %d) = %d\n",i, (arr + i),  i, *(arr + i));
	}
	
}


int main(void){
	int vector[] = { 1,4, 9, 16,25,36};

	for(int j=0; j < 6; j++) {
		printf("&vector[%d] = %p, vector[%d] = %d\n",j, &vector[j],  j, vector[j]);
	}

	printf("\n=========================================\n\n");
	printArray(vector, 6);
	printf("\n=========================================\n\n");
	displayArray(vector, 6);

}
