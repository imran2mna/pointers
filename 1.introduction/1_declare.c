#include <stdio.h>

int main(void){
	int num;
	int* p;
	p = &num;
	
	num = 47;
/*
=====
NOTE
=====
Referencing to memory location 
	*p = num (Invalid)
	 p = &num (Valid)
*/
	printf("NUM : %p \t %d\n", &num, num);
	printf("P   : %p \t %p\n", &p, p);

	return 0;
}
