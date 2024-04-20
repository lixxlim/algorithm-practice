// https://www.acmicpc.net/problem/13136

#include <stdio.h>
#include <math.h>

int main(void)
{
	float r, c, n;
	scanf("%f %f %f", &r, &c, &n);
	printf("%.0f", ceil(r / n) * ceil(c / n));
	return 0;
}
