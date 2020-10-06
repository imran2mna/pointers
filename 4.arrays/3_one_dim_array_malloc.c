#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void){
	int *pv = (int*) malloc(SIZE * sizeof(int));
	for(int i=0; i < SIZE; i++) {
		pv[i] = (i*i);
	}
	printf("Malloc array (p) : %p\n", pv);
	printf("Malloc array (&p): %p\n", &pv);


	int v [] = {1,2,3,4,5,6};
	printf("Vector array (v) : %p\n", v);
        printf("Vector array (&v): %p\n", &v);	


	return 0;
}
