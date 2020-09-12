#include <stdio.h>

int main(void){

/*
=====
NOTE
=====
A pointer to void is a general-purpose pointer used to hold references to any data type.
*/
	
	int num = 67;
	int *pi = &num;
	printf("Value of pi: %p\n", pi);
	
	void* pv = pi;
	printf("Value of pv: %p\n", pv);
	
/*
For dereferencing the void pointer we need to cast into relevant data type,
then dereference 
*/
	
	printf("Integer value : %d\n", *(int*)pv);

	return 0;
}
