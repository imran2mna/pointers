#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char *s0 = "Linux";
	printf("%s\n", s0);

	char *s1 = (char*) malloc(6 * sizeof(char));
	strcpy(s1, "Linus");
	printf("%s\n", s1);
	*(s1 + 2) = 'm';
	*(s1 + 4) = 't';
	printf("%s\n", s1);
	
	
	char s2[8];
	strcpy(s2,"OpenBSD");
	printf("%s\n", s2);
	s2[2] = 'a'; 
	s2[4] = 'T';
	printf("%s\n", s2);

	char s3[] = "Windows";
	printf("%s\n", s3);

	s3[0] = 'K';
	s3[5] = 't';
	printf("%s\n", s3);

	return 0;
}
