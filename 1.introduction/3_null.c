#include <stdio.h>

int main(void){
	int num = 65;
	/*
 	NULL is defined at header files as 
	#define NULL ((void*)0)
 	*/
	int *pi = NULL;
	     pi = ((void*)0);

	/*
 	C language syntax automatically checks the NULL of the pointers,
	therefore no need to write 'pi != NULL' or 'pi == NULL' :)
 	*/
	if(pi) {
		printf("Pointer is NOT NULL : %p \t %p\n", &pi, pi);
	} else {
		/*
 		Even pointer referencing location is null, the pointer's location is not null ;)
 		*/
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
