#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 4096

int main(int argc, char* argv[]){
	int inputFd = -1, outputFd = -1;
	int readNum; 

	if(argc !=3) {
		fprintf(stderr, "Usage : %s\n", argv[0]);
		return EXIT_FAILURE;
	}


	if((inputFd = open(argv[1], O_RDONLY)) == -1){
		perror("open");
		return EXIT_FAILURE;
	}	

	if((outputFd = open(argv[2], (O_CREAT | O_TRUNC | O_WRONLY), 
			  (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) )) == -1){
		perror("open");
		return EXIT_FAILURE;
	}	


	char * buffer = (char*) malloc(sizeof(char));
	while(( readNum = read(inputFd,buffer, SIZE)) > 0) {
		if(write(outputFd, buffer, readNum) != readNum) {
			perror("write");
			return EXIT_FAILURE;
		}
	}
	if(readNum == -1) {
		perror("read");
		return EXIT_FAILURE;
	}

	free(buffer);
	if(close(inputFd) == -1 || close(outputFd) == -1) {
		perror("close");
		return EXIT_FAILURE;
	}


	return EXIT_SUCCESS;
}
