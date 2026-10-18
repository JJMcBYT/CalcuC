#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "./Headers/euler.h"

double pideuler(int precision) {
	double base = 0;
	double indice = 0;
	double e = 0;
	int i;

	for(i = 0; i<=precision; i++) {
		base = 1 + pow(i, -1);
		indice = i;

		e = pow(base, indice);

		printf("%.48lf\r", e);
	}
	//printf("\r\ne \u2248 %0.8g\n", e);

	return e;
}
