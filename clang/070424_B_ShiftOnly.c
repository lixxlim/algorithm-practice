/*
 * https://atcoder.jp/contests/abc081/tasks/abc081_b
 */
#include <stdio.h>
#include <stdlib.h>

int check( int N, int *A, int *ret )
{
	int i;
	for( i = 0; i < N; i++ )
	{
		if( A[ i ] & 1 ) return 0;
		A[ i ] /= 2;
	}
	(*ret)++;
	return 1;
}

int main( void )
{
	int i;
	int N;
	int *A;
	int *ret = ( int* )calloc( 1, sizeof( int ) );
	
	scanf( "%d", &N );
	A = ( int* )calloc( N, sizeof( int ) );
	for( i = 0; i < N; i++ ) scanf( "%d", &A[ i ] );
	
	while( check( N, A, ret ) );
	printf( "%d\n", *ret );
	
	free( A );
	free( ret );
	return EXIT_SUCCESS;
}
