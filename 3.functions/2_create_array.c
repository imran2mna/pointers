#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/*
====
NOTE
====
If we need the function to provide a created memory location then 
the memory location should not be created inside program stack.
The best option is heap area - therefore we need to call malloc() function
inside our defined function.
*/
int* malloc_array(int size, int value){
	int* array = (int*) malloc(size * sizeof(int));
	int i;
	for(i=0; i < size; i++){
		array[i] = value;
	}
	printf("malloc array (inside function) - %p\n", array);
	return array;
}

/*
====
NOTE
====
Array created inside function will exist until the function scope termination.
Once terminated, the returned value will be (nil). 
*/

int* func_array(int size, int value){
	int array[size];
	int i;
	for(i=0; i<size; i++) {
		array[i] = value;
	}
		
	printf("func array (inside function) - %p\n", array);
	// compiler warning: function returns address of local variable
	return array;
}


int main(void){
	
	int* num = malloc_array(4,6);
	printf("malloc array (inside main) - %p\n", num);
	printf("value : %d \n", *(num + 1));

	int* val = func_array(4,6);
/*
Below printf will display (nil) for pointer value.
*/
	printf("func array (inside main) - %p\n", val);

	return 0;
}
