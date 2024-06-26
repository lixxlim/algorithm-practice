/*
 * https://www.acmicpc.net/problem/20833
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int n, i, answer = 0;
	scanf( "%d", &n );
	for( i = 1; i <= n; i++ )
	{
		answer += pow( i, 3 );
	}
	printf( "%d\n", answer );
}
