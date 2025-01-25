/**
 * https://www.acmicpc.net/problem/14606
 */
#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
	// Variables
	int n, v1, v2;
	int i;
	int* happy;
	
	// Input
	scanf( "%d", &n );
	
	// Preprocessing
	happy = ( int* ) calloc( n + 1, sizeof( int ) );
	
	// Solution
	for( i = 2; i <= n; i++ )
	{
		v1 = i / 2;
		v2 = i - v1;
		happy[ i ] = ( v1 * v2 ) + happy[ v1 ] + happy[ v2 ];
	}
	printf( "%d\n", happy[ n ] );
	
	// Return
	return EXIT_SUCCESS;
}
