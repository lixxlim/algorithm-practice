/*
 * https://www.acmicpc.net/problem/15726
 */
#include <stdio.h>

int main(void)
{
	long double a, b, c;
	scanf("%Lf %Lf %Lf", &a, &b, &c);
	long long y = a * b / c;
	long long x = a / b * c;
	printf("%lld\n", y > x ? y : x);
	return 0;
}
