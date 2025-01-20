/**
 * https://www.acmicpc.net/problem/2747
 */
#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	int n, i;
	int* dp;
	
	scanf( "%d", &n );
	dp = ( int* ) calloc( n + 1 , sizeof( int ));
	dp[ 1 ] = 1;
	for( i = 2; i <= n; i++ ) {
		dp[ i ] = dp[ i - 1 ] + dp[ i - 2 ];
	}
	printf( "%d\n", dp[ n ] );
	
	free( dp );
	return EXIT_SUCCESS;
}
