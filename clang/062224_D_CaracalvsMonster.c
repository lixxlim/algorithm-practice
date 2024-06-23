/*
 * https://atcoder.jp/contests/abc153/tasks/abc153_d
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void attack( long long H, long long* cnt )
{
	long long pows = 1;
	
	while( H > 0 )
	{
		*cnt += pows;
		pows *= 2;
		H /= 2;
	}
}

int main( void )
{
	long long H;
	long long *cnt = (long long *)calloc( 1, sizeof( long long ) );
	if( cnt == NULL )
	{
		fprintf( stderr, "Calloc failed\n");
		return EXIT_FAILURE; 
	}
	
	if( scanf( "%lld", &H ) != 1 )
	{ 
		fprintf( stderr, "Scanf failed\n");
		free( cnt );
		return EXIT_FAILURE; 
	}
	
	attack( H, cnt );
	
	printf( "%lld\n", *cnt );
	free( cnt );
	return EXIT_SUCCESS;
}
