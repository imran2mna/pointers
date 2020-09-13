#include <stdio.h>
#include <unistd.h>


/*
====
NOTE
====
swapping by value will not work.
because the parameters a,b by themself will be copies of value 
in program memory stack.
*/
void swap_by_val(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

/*
====
NOTE
====
swapping by reference will work.
because the parameters *a,*b will point to exact memory location
in program memory.
*/

void swap_by_ref(int* a, int* b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void){
	int p =3, q = 5;

	printf("Before swapping (by value) : p = %d , q = %d \n", p, q);
	swap_by_val(p,q);
	printf("After swapping (by value) : p = %d , q = %d \n", p, q);

	printf("\n");

	printf("Before swapping (by reference) : p = %d , q = %d \n", p, q);
	swap_by_ref(&p,&q);
	printf("After swapping (by reference) : p = %d , q = %d \n", p, q);
	return 0;
}
