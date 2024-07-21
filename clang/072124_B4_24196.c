/**
 * https://www.acmicpc.net/problem/24196
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	char token[ 51 ];
	char temp;
	int flg = 0;
	int len;
	
	scanf( "%50s", token );
	len = strlen( token );
	
	while( flg < len )
	{
		temp = token[ flg ];
		flg += temp - 'A' + 1;
		printf( "%c", temp );
	}
	puts("");
	
	return EXIT_SUCCESS;
}
