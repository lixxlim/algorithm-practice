/**
 * https://www.acmicpc.net/problem/25881
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int k1, k2;
	int n;
	int kh;
	int charges;
	
	scanf( "%d %d\n%d", &k1, &k2, &n );
	
	while( n-- )
	{
		scanf( "%d", &kh );
		charges = kh > 1000 ? ( k1 * 1000 ) + ( k2 * ( kh - 1000 )) : k1 * kh;
		printf( "%d %d\n", kh, charges );
	}
	return EXIT_SUCCESS;
}
