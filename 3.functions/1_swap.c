#include <stdio.h>
#include <unistd.h>

void swap(int* a, int* b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void){
	int p =3, q = 5;
	printf("before swapping : p = %d , q = %d \n", p, q);
	swap(&p,&q);
	printf("after swapping : p = %d , q = %d \n", p, q);
	return 0;
}
