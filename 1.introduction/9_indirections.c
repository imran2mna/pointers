#include <stdio.h>

int main(void){

	char* titles[] = {"Google","Yahoo","Facebook", "Wikipedia", "Bing"};
	
	int i;
	for(i=0; i < 5; i++){
		printf("array \t: %p\n", titles + i);
		printf("actual \t: %p\n", *(titles + i));
		printf("value \t: %s\n", *(titles + i));
	}

	printf("=========================\n");

    	char** websites[2];
	//websites[0] = titles + 2;
	websites[0] = &titles[2];
	//websites[1] = titles + 3;
	websites[1] = &titles[3];
 
	for(i=0; i < 2; i++){
		printf("array \t: %p\n", websites + i);
		printf("actual \t: %p\n", *(websites + i));
		printf("string \t: %p\n", *(*(websites + i)));
		printf("value \t: %s\n", *(*(websites + i)));
	}
	
	printf("=========================\n");
	
	char** search_engines[3]; 
	search_engines[0] = titles + 0;
	search_engines[1] = titles + 1;
	search_engines[2] = titles + 4;

	*(titles + 4) = "Baidu";
	
	for(i=0; i < 3; i++){
		printf("array \t: %p\n", search_engines + i);
		printf("actual \t: %p\n", *(search_engines + i));
		
		printf("string \t: %p\n", **(search_engines + i));
		//printf("string \t: %p\n", *search_engines[i]);
		
		printf("value \t: %s\n", *(*(search_engines + i)));
		//printf("value \t: %s\n", *search_engines[i]  );
	}

	return 0;
}
