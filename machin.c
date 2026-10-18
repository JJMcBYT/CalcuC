#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "./Headers/machin.h"

double pidemachin() {
	double pi = 0;
	double t1 = 12 * atan(pow(49, -1));
	double t2 = 32 * atan(pow(57, -1));
	double t3 = 5 * atan(pow(239, -1));
	double t4 = 12 * atan(pow(110443, -1));

	pi = 4 * (t1 + t2 - t3 + t4);

	return pi;
}
