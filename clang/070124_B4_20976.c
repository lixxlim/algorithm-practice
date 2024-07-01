/*
 * https://www.acmicpc.net/problem/20976
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) (x) > (y) ? (x) : (y)
#define MIN(x, y) (x) < (y) ? (x) : (y)

int main( void )
{
	int A, B, C;
	int res;
	scanf( "%d %d %d", &A, &B, &C );
	res = A + B + C;
	res -= MAX( MAX( A, B ), C );
	res -= MIN( MIN( A, B ), C );
	printf( "%d\n", res );
	return EXIT_SUCCESS;
}
