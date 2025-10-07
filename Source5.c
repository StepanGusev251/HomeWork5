#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	double B, d, c;
	float x = 16.55 * pow(10, -3);
	float y = -2.75;
	float z = 0.15;
	
	B = (sqrt(10 * (pow(x, (1. / 3)) + pow(x, (y + 2))))) * pow(asin(z - fabs(x-y)), 2);
	
	printf("%.3lf", B);


}
