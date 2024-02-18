//// https://www.acmicpc.net/problem/8723

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    const double* double_a = (const double*)a;
    const double* double_b = (const double*)b;
    return (*double_a - *double_b);
}

int main() {
	double num[3];
	scanf("%lf %lf %lf", &num[0], &num[1], &num[2]);
	size_t n = sizeof(num) / sizeof(num[0]);
	qsort(num, n, sizeof(double), compare);
	if (pow(num[0], 2) + pow(num[1], 2) == pow(num[2], 2)) puts("1");
	else if (num[0] == num[2]) puts("2");
	else puts("0");
	return 0;
}
