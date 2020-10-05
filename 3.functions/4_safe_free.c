#include <stdio.h>
#include <stdlib.h>


/*
====
NOTE
====
Following memory free will avoid dangling pointers,
which is safe for application.
*/

void safeFree(void** pv) {
	if( pv != NULL && *pv != NULL) {
		printf("Freeing memory %p\n", *pv);
		free(*pv); 
		*pv = NULL;
	} 
}

int main(void){
	int* num = (int*) malloc(sizeof(int));
	*num = 7;
	printf("memory - %p , %d\n", num, *num);
	safeFree(&num);
	printf("memory - %p \n", num);
	return 0;
}
