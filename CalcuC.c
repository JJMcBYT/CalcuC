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
	
	while(1) {
		printf("Would you like to input an equation? Y/n: ");
		scanf("%c", &choice);

		if(choice == 'N' || choice == 'n') {
			break;
		}

		else if(choice == 'Y' || choice == 'y') {;}

		else {
			printf("Invalid option. Please try again.\n");
			getchar();
			continue;
		}

		getchar();
		printf("Please input a 2 term equation: ");
		fgets(equation, sizeof(equation), stdin);
		equation[strlen(equation) - 1] = '\0';

		if(strcmp(equation, "") == 0) {
			printf("String cannot be empty.\n");
			continue;
		}

		else {
			if(strpassing(equation) != 0) {
				//printf("Your equation is: %s\n", equation);
				finalanswer = shuntingyardalgo(equation);
				break;
			}
			else {
				continue;
			}
		}	
	}
	printf(" = %.5g\n", finalanswer);
	
	return 0;
}
