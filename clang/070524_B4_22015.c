/*
 * https://www.acmicpc.net/problem/22015
 */
#include <stdio.h>
#define MAX(x, y) (x) > (y) ? (x) : (y)

int main( void )
{
	int A, B, C, max, ret;
	scanf( "%d %d %d", &A, &B, &C );
	max = MAX( MAX( A, B ), C );
	ret = ( max - A ) + ( max - B ) + ( max - C );
	printf( "%d\n", ret );
	return 0;
}
