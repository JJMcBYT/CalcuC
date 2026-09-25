#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./Headers/regexlet.h"
#include "./Headers/regexnum.h"
#include "./Headers/shuntingyard.h"


int main() {
	char equation[50];
	char choice = '\0';
	float finalanswer;
	
	printf("Welcome to CalcuC\n");
	
	do {
		printf("Would you like to input an equation? Y/n: ");
		scanf(" %c", &choice);

		if(choice == 'N' || choice == 'n') {
			exit(0);
		}

		else if(choice == 'Y' || choice == 'y') {
			getchar();
			printf("Please input a 2 term equation: ");
			fgets(equation, sizeof(equation), stdin);
			equation[strlen(equation) - 1] = '\0';

			if(strcmp(equation, "") == 0) { 			
				printf("String cannot be empty.\n");
				continue;
			}

			else {
				if(strpassing(equation) != 0) {				// strpassing(x) = a regex to match to a list of letters and characters so that these characters don't end up in the shuntingyardalgo
					//printf("Your equation is: %s\n", equation);
					finalanswer = shuntingyardalgo(equation); // My custom algorithm for parsing strings. Can be found in shuntingyard.c
					printf(" = %.5g\n", finalanswer);
					choice = 'Y';
				}
				
				else {
					continue;
				}
			}
		}

		else {
			printf("Invalid option. Please try again.\n");
		}

	} while(choice == 'Y');
	
	return 0;
}
