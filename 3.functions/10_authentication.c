#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <string.h>
#include <unistd.h>
#include <shadow.h>
#include <pwd.h>
#include <errno.h>
#include <crypt.h>

#define BUF_SIZE 64

void print(char * arg) {
	write(fileno(stdout), arg, strlen(arg));
}

void err_print(char * arg) {
	write(fileno(stderr), arg, strlen(arg));
}

int main(void){
	struct termios oflags, nflags;
	int len = -1;
	char * username = (char*) malloc(BUF_SIZE * sizeof(char));
	char * password = (char*) malloc(BUF_SIZE * sizeof(char));
	char *p, *encrypted;


	print("username : ");
	if((len = read(fileno(stdin), username, BUF_SIZE)) < 0) {
		perror("read");
		return EXIT_FAILURE;
	}
	username[len - 1] = 0;
	struct passwd * user = getpwnam(username);
	struct spwd * shadow = getspnam(username);
	for (p = username; *p != '\0';) {
		*p = '\0'; p++;
	}
	free(username); 
	username = NULL; p = NULL;


	tcgetattr(fileno(stdin), &oflags);
	nflags = oflags;
	nflags.c_lflag &= ~ECHO;
	nflags.c_lflag |= ECHONL;
	if (tcsetattr(fileno(stdin), TCSANOW, &nflags) != 0) {
		perror("tcsetattr");
		return EXIT_FAILURE;
	}

	print("password: "); 
	len = read(fileno(stdin), password, BUF_SIZE);
	if (tcsetattr(fileno(stdin), TCSANOW, &oflags) != 0) {
		perror("tcsetattr");
		return EXIT_FAILURE;
	}

	password[len - 1] = 0;
	if(user == NULL || shadow == NULL) {
		for(p = password; *p != '\0'; ){
			*p = '\0'; p++;
		}
		free(password); 
		password = NULL; p = NULL; 
		err_print("Authentication failed.\n");
		return EXIT_FAILURE;
	}

	encrypted = crypt(password, shadow->sp_pwdp);
	for(p = password; *p != '\0'; ){
		*p = '\0'; p++;
	}
	free(password); 
	password = NULL; p = NULL; 
	if(strcmp(encrypted, shadow->sp_pwdp) == 0) {
		print("Authenticated.\n");
		setuid(user->pw_uid);
		print((getpwuid(geteuid()))->pw_name);
		print("\n");
	} else {
		err_print("Authentication failed.\n");
		return EXIT_FAILURE;
	} 	

	return EXIT_SUCCESS;
}
