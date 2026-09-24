#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>
#include "./Headers/regexlet.h"

int strpassing(char x[50]) {
	regex_t noLetters;
	int rgxConf;
	int allowedStr;
	
	rgxConf = regcomp(&noLetters, "[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ]", 0);

	if (rgxConf == 0) {
		//printf("Regex Compiled Successfully.\n");
	}

	else {
		printf("Regex Compiling Failed.\n");
	}
	

	allowedStr = regexec(&noLetters, x, 0, NULL, 0);

	if (allowedStr == 0) {
		printf("Err: String cannot contain any letters nor whitespaces.\n");
	}

	else {
		//for (int i = 0; i <= strlen(x); i++) {
		//	printf("%c ", x[i]);
		//}
		//printf("\n");
	}

	return allowedStr;

}
