#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./Headers/regexnum.h"

float shuntingyardalgo(char x[50]) {
	float val1 = 0;
	char val1str[32] = {0};
	float val2 = 0;
	char val2str[32] = {0};
	char operand = '\0';
	int currentnum = 0;
	int i;
	char cmpstr = '\0';
	int detectionvar;
	int snumplace = 0;
	float answer;
	
	currentnum = 1;

	for(i = 0; i < strlen(x); i++) {
		cmpstr = x[i];

		detectionvar = numdetect(&cmpstr);
		
		if(currentnum == 1) {
			if(detectionvar == 0) {
				val1str[i] = cmpstr;
				snumplace += 1;
			}

			else if(detectionvar == 1) {
				if(cmpstr == '+') {
					operand = '+';
					currentnum = 2;
					snumplace += 1;
				}
				
				else if(cmpstr == '-') {
					operand = '-';
					currentnum = 2;
					snumplace += 1;
				}

				else if(cmpstr == '*') {
					operand = '*';
					currentnum = 2;
					snumplace += 1;
				}

				else if(cmpstr == '/') {
					operand = '/';
					currentnum = 2;
					snumplace += 1;
				}

			}	
		}

		else if(currentnum == 2) {
			val2str[i-snumplace] = cmpstr;
		}
	}
	val2str[strlen(val2str)] = '\0';
	printf("%s %c %s", val1str, operand, val2str);

	val1 = atof(val1str);
	val2 = atof(val2str);
	
	if(operand == '+') {
		answer = val1 + val2;
	}
	else if(operand == '-') {
		answer = val1 - val2;
	}
	else if(operand == '*') {
		answer = val1 * val2;
	}
	else if(operand == '/') {
		answer = val1 / val2;
	}

	return answer;
}
