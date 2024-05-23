/*
 * https://www.acmicpc.net/problem/16693
 */
#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
	double a, p1, r, p2;
	scanf("%lf %lf\n%lf %lf", &a, &p1, &r, &p2);
	double ap = a / p1;
	double rp = r * r * PI / p2;
	puts(ap > rp ? "Slice of pizza" : "Whole pizza");
	return 0;
}
