/*

This C code, coded for E2E112 Introduction to Computer Programin Project Assignment
Coded by Abdullah Baki Yılmaz (EEM II)

*/

#include <stdio.h>
#include <math.h>
#include <windows.h>


double f(double x) {

	return pow(x, 3);
}

double df(double x) {

	return 3 * pow(x, 2);
}

double grad_f(double x, double a, int N) {

	for (int i = 0; i < N; i = i + 1) {

		x = x - a * df(x);
		printf("Grad of f:% f\n", x);
	}
	return x;
}

int main() {

	double x, a, min_x;
	int N;
	printf("Enter value for x: ");
	scanf_s("%lf", &x);
	printf("Enter value for a: ");
	scanf_s("%lf", &a);
	printf("Enter value for N: ");
	scanf_s("%d", &N);
	//x = 6;
	//a = 0.02;
	//int N = 10;
	min_x = grad_f(x, a, N);

	printf("Minimum gradient of f in 10 iterations: %f\n", min_x);

	Sleep(10000);
	return 0;
}
