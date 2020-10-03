#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
	int age;
	char *name;
	char *title;
} Person;

int main(void) {
	Person *p1 = (Person*) malloc(sizeof(Person));
	p1-> age = 4;
	p1->name = (char*) malloc(6 * sizeof(char));
	strcpy(p1->name, "Ayyub");
	p1->title = (char*) malloc(15 * sizeof(char));
	strcpy(p1->title, "Operating System");

	printf(" Name : %s, Age : %d\n", p1->name, p1->age);
	printf(" Memory : %p, %p, %p\n", p1, p1->name, p1->title);

	return 0;
}
