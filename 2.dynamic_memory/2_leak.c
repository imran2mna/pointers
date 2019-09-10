#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	char* chunk;

	while(1){
		chunk = (char*) malloc(512*1024*8*sizeof(char));
		sleep(1);
		printf("Allocated location : %p\n", chunk);			
	}

	return 0;
}
