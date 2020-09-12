#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char *name = (char*) malloc(strlen("Susan")+1 );
	memset(name, 0, strlen("Susan") + 1);
	strcpy(name, "Susan");
/*
====
NOTE
====
For printf format %c, we need to provide dereferenced pointer value *name
*/
	while(*name != 0){
		printf("%c", *name);
		name++;
	}
	printf("\n");
/*
====
NOTE
====
Above pointer current location makes us to relocate the string's starting location.
*/
	return 0;
}
