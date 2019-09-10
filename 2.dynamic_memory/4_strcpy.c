#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// below code has some errors, please fix them.
int main(void){
	char* name = (char*) malloc(strlen("Susan")+1 );
	strcpy(name, "Susan");
	while(name != '\0'){
		printf("%c", name);
		name++;
	}
	printf("\n");
	return 0;
}
