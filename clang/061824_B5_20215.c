/*
 * https://www.acmicpc.net/problem/20215
 */
#include <stdio.h>
#include <math.h>

int main( void )
{
	int w, h;
	scanf("%d %d", &w, &h);
	double x = sqrt((w * w) + (h * h));
	printf("%.6lf\n", w+h-x);
	return 0;
}
