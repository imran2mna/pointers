#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
	int age;
	char *name;
	char *title;
} Person;

void safeFree(void** pp){
	if(pp != NULL &&  *pp != NULL) {
		//printf("Free - %p\n", *pp);
		free(*pp);*pp = NULL;
	}
}

Person * createPerson(int age, char* name, char* title) {
	Person *person = (Person*) malloc(sizeof(Person));
	person->name = (char*) malloc(strlen(name)*sizeof(char));
	person->title = (char*) malloc(strlen(title)*sizeof(char));

	person->age = age;
	strcpy(person->name, name);
	strcpy(person->title, title);

	return person;
}

void removePerson(Person **pp){
	if(pp != NULL && *pp != NULL) {
		safeFree((void**)&((*pp)->name));
		safeFree((void**)&((*pp)->title));
		safeFree((void**)pp);
	}
}

int main(void) {
	Person *p1 = createPerson(4,"Ayyub", "Practical C & Algorithms");

	printf("Name : %s,  Title : %s, Age : %d\n", p1->name,p1->title, p1->age);
	printf("Memory : %p, %p, %p\n", p1, p1->name, p1->title);

	removePerson(&p1);
	printf("Memory : %p\n", p1);


	return 0;
}
