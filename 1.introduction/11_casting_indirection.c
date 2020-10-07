#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a = 1;
	int b = 4;
	int c = 6;
	int d = 8;
	int e = 3;
	void** arr = (void**) malloc(5 * sizeof(void*));
	
	*(arr + 0) = &a;
	*(arr + 1) = &b;
	*(arr + 2) = &c;
	*(arr + 3) = &d;
	*(arr + 4) = &e;

	printf("%d\n", *((int*)*(arr + 2)));

	return 0;
}
