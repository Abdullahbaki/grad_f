/*

This C code, coded for E2E112 Introduction to Computer Programin Project Assignment
Coded by Abdullah Baki Yılmaz (EEM II)

*/

#include <stdio.h>
#include <math.h>
#include <windows.h>


float f(float x) {

	return pow(x, 3);
}

float df(float x) {

	return 3 * pow(x, 2);
}

float grad_f(float x, float a, int N) {

	for (int i = 0; i < N; i = i + 1) {

		 x = x - a * df(x);
		 printf("Grad of f:% f\n", x);
	}
	return x;
}

int main() {

	float x, a, min_x;

	 x = 6;
	 a = 0.02;
	 int N = 10;
	 min_x = grad_f(x, a, N);

	 printf("Minimum gradient of f in 10 iterations: %f\n", min_x);

	 Sleep(10000);
	 return 0;
}
