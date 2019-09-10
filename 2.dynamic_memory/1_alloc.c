#include <stdio.h>
#include <stdlib.h>

int main(void){
	//memory allocation through malloc function
	int* pi = (int*) malloc(sizeof(int));
	*pi = 5; 
	printf("*pi : %d\n", *pi);
	free(pi);

	// string memory allocation
	char* pc = (char*) malloc(6);
	char word[] = {'L', 'i', 'n', 'u', 'x'};
	int i;
	for(i=0; i < 8 ; i++){
		*(pc + i) = 0; 
	}

	for(i=0; i < 5 ; i++){
		*(pc + i) = word[i]; 
	}
	printf("%s\n", pc);
	printf("%s\n", word);
	
	return 0;
}
