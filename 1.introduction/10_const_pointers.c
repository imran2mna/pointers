#include <stdio.h>

int main(void){
	int num = 5;
	int val = 70;
	const int limit = 500;
	const int top = 700;

	int* pi = &num; // pointer to integer
	const int *pci = &limit; // pointer to constant integer
	int * const ptr = &num; // constant pointer to integer
	const int * const cptr = &top; // constant pointer to constant integer

	printf("*pci - %d\n", *pci);
	pci = &top;
	printf("*pci - %d\n", *pci);

	pi -= 2;
	//*pi = 8; - assingment will not work, because it tries to access constant int area
	*(pi+2) = 7;
	printf("num - %d\n", num);
	//printf("*pi - %d\n", *pi);

	*ptr = 8;
	// ptr = &val; - error : constant pointer
	printf("num - %d\n", num);
	printf("cptr - %d\n", *cptr);
	
	pi = &val;

	return 0;
}
