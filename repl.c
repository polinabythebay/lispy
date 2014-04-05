

#include <stdio.h>
//#include <stdlib.h>

//#include <editline/readline.h>
//#include <editline/history.h>

/* Declare a static buffer for user input to max size 2048 */

static char input[2048]; //declares global array of 2048 chars
//static makes it local to the file

int main(int argc, char** argv){

	//print version and exit info
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	//never ending loop
	while(1){

		//output prompt
		//does not append a new line character
		fputs("lispy> ", stdout);
		//char* input = readline("lispy> ");

		//read a line of user input of max size 2048
		fgets(input, 2048, stdin);

		//add input to history
		//add_history(input);

		//echo input back to user
		printf("No, you're a %s", input);	

		//free retrived input
		//free(input);

	}

	return 0;
}