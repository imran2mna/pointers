#include <stdio.h>

/*
====
NOTE
====
common misconception - an array and a pointer are completely interchangeable.
righ idea - an array name is not a pointer, array name can be treated as a pointer. Although the array name used by itself return the array's address, the array name can not be used as target of an assignment.
*/


int main(void){
	int vector [] = {1, 2, 3, 4, 5 };
	int num = 7;
	int* pv = vector;
	printf("vector : %p\n", vector);
	printf("pv     : %p\n", pv);
	printf("&vector[0] : %p\n", &vector[0]);

	// below will produce error in compilation
	// error: assignment to expression with array type
	//vector = &num;

	return 0;
}
