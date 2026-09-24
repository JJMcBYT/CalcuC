#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>
#include "./Headers/regexnum.h"

int numdetect(char x[1]) {
	regex_t Nums;
	int rgxConf;
	int numDetect;
	
	rgxConf = regcomp(&Nums, "[0123456789.]", 0);

	if (rgxConf == 0) {
		//printf("Regex Compiled Successfully.\n");
	}

	else {
		printf("Regex Compiling Failed.\n");
	}
	

	numDetect = regexec(&Nums, x, 0, NULL, 0);

	if (numDetect == 0) {
		//printf("Detected Numbers.\n");
	}

	else {
		//printf("Detected Operand.\n");
		numDetect = 1;
	}

	return numDetect;

}
