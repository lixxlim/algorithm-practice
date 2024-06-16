/*
 * https://www.acmicpc.net/problem/1380
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main( void )
{
	int i, n, cnt = 1;
	
	while( TRUE ) {
		char students[ 100 ][ 61 ];
		int earring[ 100 ] = { 0 };
		int serial;
		char AB;
		
		if( scanf( "%d", &n ) != 1 || n <= 0 ) { 
			break; 
		}
		getchar();
		
		for( i = 0; i < n; i++ ) {
			scanf( "%[^\n]s", students[ i ] );
			getchar();
		}
		for( i = 0; i < (2 * n - 1); i++ ) {
			scanf( "%d %c", &serial, &AB );
			earring[ serial - 1 ]++;
		}
		for( i = 0; i < n; i++ ) {
			if( earring[ i ] == 1 ) {
				printf( "%d %s\n", cnt++, students[ i ] );
			}
		}
	}
	return EXIT_SUCCESS;
}
