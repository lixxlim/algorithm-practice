/*
 * https://www.acmicpc.net/problem/1343
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	char board[51];
	int cusor = 0, cnt = 0;
	int i, j;
	int len;
	
	scanf( "%s", board );
	
	len = strlen( board );
	while( cusor < len ) {
		cnt = strspn( &board[ cusor ], "X" );
		if( cnt & 1 ) {
			strcpy( board, "-1\0" );
			break;
		}
		for( i = 0; i < (cnt / 4) * 4; i++ ) {
			board[ cusor + i ] = 'A';
		}
		for( j = (cnt / 4) * 4; j < cnt; j++ ) {
			board[ cusor + j ] = 'B';
		}
		cusor += cnt + strspn( &board[ cusor ], "." );
	}
	puts( board );
	
	return EXIT_SUCCESS;
}
