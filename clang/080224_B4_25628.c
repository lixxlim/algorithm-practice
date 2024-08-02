/**
 * https://www.acmicpc.net/problem/25628
 */
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (x) < (y) ? (x) : (y)

int main( void )
{
	int a, b;
	scanf( "%d %d", &a, &b );
	a /= 2;
	printf( "%d\n", MIN( a, b ));
	return EXIT_SUCCESS;
}
