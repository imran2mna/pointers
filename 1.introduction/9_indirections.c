#include <stdio.h>


// For better understanding draw in a paper and analyze

int main(void){

	/*
 	'titles' is an array, which holds the memory locations to char memory locations scatterd in physical memory
 	*/
	char* titles[] = {"Google","Yahoo","Facebook", "Wikipedia", "Bing"};
	
	printf("titles[0] - %s\n", titles[0]);
	/*
 	'websites' is an array, which holds the memory locations to 'titles' elements' memory location.
	means the array is collection of pointer to pointer.
	This will reduce cloning multiple copies of strings :D
 	*/
    	char** websites[2];

	websites[0] = &(titles[2]);
	websites[1] = &(titles[3]);

	printf("*(websites[0]) - %s\n", *(websites[0])); 
	
	char** search_engines[3]; 
	/*
 	'titles' by itself is a pointer, therefore pointer arithmetic is enough
 	*/
	search_engines[0] = titles + 0;
	search_engines[1] = titles + 1;
	search_engines[2] = titles + 4;
	// change in titles will reflect on referencing arrays :)
	*(titles + 4) = "Hakia";
	
	printf("*(search_engines[2]) - %s\n", *(search_engines[2]));
	printf("**(search_engines + 2) - %s\n", **(search_engines + 2));
	return 0;
}
