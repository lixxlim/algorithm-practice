/*
 * https://www.acmicpc.net/problem/21665
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int i, j;
	int r, c;
	char img[ 100 ][ 100 ] = { 0 };
	char cpy[ 100 ][ 100 ] = { 0 };
	int ret;
	
	scanf( "%d %d\n", &r, &c );
	
	for ( i = 0; i < r; i++ ) {
		scanf( "%s", img[ i ] );
	}
	for ( i = 0; i < r; i++ ) {
		scanf( "%s", cpy[ i ] );
	}
	
	ret = 0;
	for ( i = 0; i < r; i++ ) {
		for ( j = 0; j < c; j++ ) {
			if ( (img[ i ])[ j ] == (cpy[ i ])[ j ] ) {
				ret++;
			}
		}
	}
	
	printf( "%d\n", ret );
	
	return EXIT_SUCCESS;
}
