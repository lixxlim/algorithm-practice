/**
 * https://www.acmicpc.net/problem/24183
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int c4, a3, a4;
	long double c4g, a3g, a4g;
	
	scanf( "%d %d %d", &c4, &a3, &a4 );
	c4g = ( 229 * 324 * c4 / 1000000.0 );
	a3g = ( 297 * 420 * a3 / 1000000.0 );
	a4g = ( 210 * 297 * a4 / 1000000.0 );
	
	printf( "%llf\n", c4g * 2 + a3g * 2 + a4g );
	return EXIT_SUCCESS;
}
