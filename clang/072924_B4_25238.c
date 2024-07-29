/**
 * https://www.acmicpc.net/problem/25238
 */
#include <stdio.h>
#include <stdlib.h>

int check( float a, float b )
{
	int ret = 0;
	ret = a - ( a * b / 100.0 ) < 100;
	return ret;
}

int main( void )
{
	float a, b;
	scanf( "%f %f", &a, &b );
	printf( "%d\n", check( a, b ));
	return EXIT_SUCCESS;
}
