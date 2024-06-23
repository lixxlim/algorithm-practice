/*
 * https://www.acmicpc.net/problem/1417
 */
#include <stdio.h>
#include <stdlib.h>

int getMaxIndex( int N, int *candidate )
{
	int index = 0;
	int val = candidate[ 0 ];
	int i;
	for( i = 1; i < N; i++ )
	{
		if( candidate[ i ] >= val )
		{
			index = i;
			val = candidate[ i ];
		}
	}
	return index;
}

int main( void )
{
	int N;
	int *candidate;
	int i;
	int flg;
	int people = 0;
	
	if( scanf( "%d", &N ) != 1 )
	{
		fprintf( stderr, "err: fail at [ scanf ]\n" );
		return EXIT_FAILURE;
	}
	
	candidate = (int *)calloc( N, sizeof( int ) );
	if( candidate == NULL )
	{
		fprintf( stderr, "err: fail at [ calloc ]\n" );
		return EXIT_FAILURE;
	}
	
	for( i = 0; i < N; i++ )
	{ 
		scanf( "%d", &candidate[ i ] );
	}
	
	while(( flg = getMaxIndex( N, candidate ) ))
	{
		if( N <= 1 ) break;
		people++;
		candidate[ 0 ]++;
		candidate[ flg ]--;
	}
	
	printf( "%d\n", people );
	return EXIT_SUCCESS;
}
