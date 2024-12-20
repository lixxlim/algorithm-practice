/**
 * https://www.acmicpc.net/problem/30045
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// variant
	int n, i, j, len, ret;
	char** inp;
	
	// input
	scanf( "%d", &n );
	inp = ( char** )malloc( n * sizeof( char* ) );
	for( i = 0; i < n; i++ )
	{
		inp[ i ] = ( char* )malloc( 501 * sizeof( char ) );
		scanf( "%500s", inp[ i ] );
	}
	
	// solution
	ret = 0;
	for( i = 0; i < n; i++ )
	{
		len = strlen( inp[ i ] );
		for( j = 0; j < len-1; j++ )
		{
			int isOI = inp[ i ][ j ] == 'O' && inp[ i ][ j + 1 ] == 'I';
			int is01 = inp[ i ][ j ] == '0' && inp[ i ][ j + 1 ] == '1';
			if( isOI || is01 )
			{
				ret++;
				break;
			}
		}
	}
	printf( "%d\n", ret );
	
	// free
	for( i = 0; i < n; i++ ) free( inp[ i ] );
	free( inp );
	
	// exit
	return 0;
}
