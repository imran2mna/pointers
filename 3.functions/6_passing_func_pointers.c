#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b){
	return a - b;
}

typedef int (*fptr)(int,int);

int compute(fptr op, int a, int b) {
	return op(a,b);
}


int main(void){
	printf("Add : %d\n", compute(add,54,35));
	printf("Sub : %d\n", compute(subtract, 54,35));

	return 0;
}
