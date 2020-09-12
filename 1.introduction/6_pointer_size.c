#include <stdio.h>

/*
As per machine architecture bits change (16-bit, 32-bit, 64-bit).
This might effect on pointer value.
*/

/*
If the operating system uses virtual memory system,
then the memory locations are locations with respect to program's virtual memory
*/

int main(void){
	printf("Size of *char : %d\n", sizeof(char*));
	printf("Size of *int  : %d\n", sizeof(int*));
	
	return 0;
}
