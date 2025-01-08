// https://www.acmicpc.net/problem/31090
#include <stdio.h> 
#include <stdlib.h>

int main( void )
{
	// Variant
	int t;       /* Number of Test case */
	int i;       /* Index flag          */
	int* years;  /* Array for Years     */
	
	// Input
	scanf( "%d", &t );
	years = ( int* )calloc( t, sizeof( int ) );
	for( i = 0; i < t; i++ ) { scanf( "%d", &years[ i ] ); }
	
	// Solution
	for( i = 0; i < t; i++ )
	{
		printf( "%s\n", ( years[i] + 1 ) % ( years[i] % 100 ) ? "Bye" : "Good" );
	}
	
	// Exit 
	return EXIT_SUCCESS;
}
