/*
 * https://www.acmicpc.net/problem/21964
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int n;
	int i;
	char* str;
	
	scanf( "%d", &n );
	str = ( char* )malloc(( n + 1 ) * sizeof( char ));
	getchar();
	scanf( "%s", str );
	printf( "%s\n", &str[ n - 5 ] );
	
	return EXIT_SUCCESS;
}
