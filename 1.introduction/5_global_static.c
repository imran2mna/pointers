#include <stdio.h>

int *globalpi;
static int *spi;

void foo(){
}

int main(void){
	
	printf("Value of global pi : %p\n", globalpi);
	printf("Value of static pi : %p\n", spi);
		

	return 0;
}
