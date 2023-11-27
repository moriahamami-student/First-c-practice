#include <stdio.h>

void main() {
	printf("Hello World!\n");

	// OPERATORS

	int x, y;
	float avg;
	x = 5;
	y = 6;
	avg = (x + y) / 2; // int divided by int results in int 
	printf("avg= %d\n", avg);

	float a, b;
	a = 5;
	b = 6;
	avg = (a + b) / 2; // float divided by int result in float
	printf("avg= %f\n", avg);

	int c, d;
	c = 5;
	d = 6;
	avg = (x + y) / 2.0; // int divided by double result in double
	printf("avg= %f\n", avg);

	// Notice that printf promotes float to double auto.
	printf("2.0 is type double - %f\n", 2.0); // 2.0 is type double
	printf("2.f is type float - %f\n", 2.f);  // 2.f is type float
	printf("2.0f is type float - %f\n", 2.0f); // 2.0f is type float
}