#include <stdio.h>


int (*fptr)(int, int);

int add(int a, int b){
	return a + b;
}

int main(void){
	int a = 68, b = 75;
	fptr = add;
	printf("Sum of %d and %d is %d\n", a , b, fptr(a,b));
	return 0;
}
