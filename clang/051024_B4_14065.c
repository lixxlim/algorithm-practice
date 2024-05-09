/*
 * https://www.acmicpc.net/problem/14065
 */
#include <stdio.h>

int main(void)
{
	double x;
	scanf("%lf", &x);
	printf("%lf\n", 100.0 / ((1.609344 / 3.785411784) * x));
	return 0;
}
