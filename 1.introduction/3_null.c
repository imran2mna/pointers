#include <stdio.h>

int main(void){
	int num = 65;
	int *pi = NULL;

	if(pi) {
		printf("Pointer is NOT NULL : %p \t %p\n", &pi, pi);
	} else {
		printf("Pointer is NULL : %p \t %p\n", &pi, pi);
	}


	pi = &num;

	
	if(pi) {
		printf("Pointer is NOT NULL : %p \t %p\n", &pi, pi);
	} else {
		printf("Pointer is NULL : %p \t %p\n", &pi, pi);
	}

	return 0;
}
