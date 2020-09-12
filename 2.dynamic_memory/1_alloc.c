#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
/* 
====
NOTE
====
Dynamic memory allocation through malloc() function.
The function returns void *, which should be casted into required data type.
Due to computer architecture differences better to use sizeof() function.
*/
	int* pi = (int*) malloc(sizeof(int));
	*pi = 5; 
	printf("*pi : %d\n", *pi);
/*
====
NOTE
====
Once the pointer used, it can be released through free() function.
Then assign the pointer to NULL to avoid dangling pointer.
*/
	free(pi);
	pi = NULL;


/*
====
NOTE
====
Here we create string in heap using malloc() function.
Then initialize the memory with 0s.
*/
	char word[] = {'L', 'i', 'n', 'u', 'x'};
	printf("word : %s\n", word);

	char* pc = (char*) malloc(6*sizeof(char));
	memset(pc,0,6); 
/*	
	int i;
	for(i=0; i < 5 ; i++){
		*(pc + i) = word[i]; 
	}

====
NOTE
====
Even above commented for() loop can be used to copy the content.
Otherwise simply use the memcpy() function, which is same.
*/
	memcpy(pc, word, 5);
	printf("pc : %s\n", pc);
	
	return 0;
}
