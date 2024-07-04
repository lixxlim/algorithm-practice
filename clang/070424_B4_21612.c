/*
 * https://www.acmicpc.net/problem/21612
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int B;
	int P;
	if( scanf( "%d", &B ) != 1 ) return EXIT_FAILURE;
	
	P = B * 5 - 400;
	printf( "%d\n%d\n", P, P == 100 ? 0 : P > 100 ? -1 : 1 );
	return EXIT_SUCCESS;
}
