/*
 * https://www.acmicpc.net/problem/16486
 */
#include <stdio.h>

#define PI 3.141592

int main(void)
{
	double d1, d2, area = 0;
	scanf("%lf\n%lf", &d1, &d2);
	area += (d1 * 2) + (d2 * 2 * PI);
	printf("%lf\n", area);
	return 0;
}
