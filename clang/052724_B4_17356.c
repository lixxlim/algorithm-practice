/*
 * https://www.acmicpc.net/problem/17356
 */
#include <stdio.h>
#include <math.h>

double A, B;

int main(void)
{
	scanf( "%lf %lf", &A, &B );
	printf( "%lf\n", 1.0/(1.0+pow(10.0, ((B-A)/400.0))) );
	return 0;
}
