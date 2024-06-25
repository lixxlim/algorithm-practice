/*
 * https://www.acmicpc.net/problem/20673
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int p, q;
	scanf( "%d\n%d", &p, &q );

	if( p <= 50 && q <= 10 ) {
		puts( "White" );
	} else if( q > 30 ) {
		puts( "Red" );
	} else {
		puts( "Yellow" );
	}
	return EXIT_SUCCESS;
}
