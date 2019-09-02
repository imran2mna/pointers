#include <stdio.h>

int main(void){

/*
=====
NOTE
=====
A pointer to void is a general-purpose pointer used to hold references to any data type.
*/
	
	int num;
	int *pi = &num;
	printf("Value of pi: %p\n", pi);
	
	void* pv = pi;
	printf("Value of pv: %p\n", pv);
	


	return 0;
}
