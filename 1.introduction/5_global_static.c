#include <stdio.h>


/*
====
NOTE
====
The global & static pointers automatically initialized to NULL.
Therefore there are no garbage values in pointers.
*/
int *globalpi;

void foo(){
	static int *spi;
	printf("Value of static pi : %p\n", spi);
}

int main(void){
	printf("Value of global pi : %p\n", globalpi);
	foo();	

	return 0;
}
