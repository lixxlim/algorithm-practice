/**
 * https://www.acmicpc.net/problem/26546
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
	int n;
	char str[1024];
	int st, ed;
	int i;
	
	scanf( "%d", &n );
	while( n-- ) {
		scanf( "%s %d %d", str, &st, &ed );
		for( i = 0; i < strlen(str); i++ ) {
			if( i >= st && i < ed ) continue;
			printf( "%c", str[i] );
		}
		puts("");
	}
	
	return EXIT_SUCCESS;
}
