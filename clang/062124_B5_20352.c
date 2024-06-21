/*
 * https://www.acmicpc.net/problem/20352
 */
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

int main( void )
{
	double a;
	scanf("%lf", &a);
	printf("%.10lf\n", sqrt(a/PI)*PI*2);
	return 0;
}
