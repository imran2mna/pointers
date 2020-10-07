#include <stdio.h>

void f1(){
	int a = 67;
	printf("Inside f1 : %d\n", a);
}

int f2(){
	int b;
	printf("Inside f2 : %d\n", b);
	return b;
}

int main(void){
	f1();
	f2();
	return 0;
}
