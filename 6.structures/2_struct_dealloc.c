#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
	int age;
	char *name;
	char *title;
} Person;


void safeFree(void** p2){
	if(p2 != NULL &&  *p2 != NULL) {
		free(*p2);
		*p2 = NULL;
	}
}

int main(void) {
	Person *p1 = (Person*) malloc(sizeof(Person));
	p1-> age = 4;
	p1->name = (char*) malloc(6 * sizeof(char));
	strcpy(p1->name, "Ayyub");
	p1->title = (char*) malloc(15 * sizeof(char));
	strcpy(p1->title, "Operating System");

	printf("Name : %s, Age : %d, Title : %s\n", p1->name, p1->age, p1->title);
	printf("Memory : %p, %p, %p\n", p1, p1->name, p1->title);


	safeFree((void**)&p1->name);
	safeFree((void**)&p1->title);
	safeFree((void**)&p1);


	printf("Memory : %p \n", p1);

	return 0;
}
