#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>
#include "./Headers/regexlet.h"
#include "./Headers/euler.h"
#include "./Headers/machin.h"

int strpassing(char x[50]) {
	regex_t noLetters;
	int rgxConf;
	int allowedStr;

	if (strcmp(x, "e?") == 0) {
		int precision = 0;
		double e = 0;

		//printf("E FOUND.\n");
		//exit(1);
		
		printf("Please input desired precision (n>=0): ");
		scanf("%d", &precision);

		e = pideuler(precision);

		printf("\ne \u2248 %.8g\n", e);
		exit(0);
	}

	else if(strcmp(x, "pi?") == 0) {
		printf("\u03c0 \u2248 %.16g\n", pidemachin());
		exit(0);
	}
	
	rgxConf = regcomp(&noLetters, "[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ]", 0);

	if (rgxConf == 0) {
		//printf("Regex Compiled Successfully.\n");
	}

	else {
		printf("Regex Compiling Failed.\n");
	}
	

	allowedStr = regexec(&noLetters, x, 0, NULL, 0);

	if (allowedStr == 0) {
		printf("Err: String cannot contain any letters, whitespaces nor other nonmathmatic symbols.\n");
	}

	else {
		//for (int i = 0; i <= strlen(x); i++) {
		//	printf("%c ", x[i]);
		//}
		//printf("\n");
	}

	return allowedStr;

}
