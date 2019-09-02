#include <stdio.h>

int main(void){
	int num = 5;
	const int limit = 500;

	int* pi; // pointer to integer
	const int* pci; // pointer to constant integer

	pi = &num;
	pci = &limit;

	num = 6;
	pi += 1;

	//limit = 102;
	pci += 1;
	

	return 0;
}
