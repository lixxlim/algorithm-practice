/*
 * https://www.acmicpc.net/problem/5086
 */
#include <stdio.h>
#include <stdlib.h>

char string[3][9] = { "neither", "factor", "multiple" };

const char* checker( int x, int y )
{
	return &( *( x % y ? y % x ? string[0] : string[1] : string[2] ) );
}

int main( void )
{
	int x, y;
	while( 1 )
	{
		scanf( "%d %d", &x, &y );
		if( ( x | y ) == 0 ) break;
		puts( checker( x, y ) );
	}
	return EXIT_SUCCESS;
}
