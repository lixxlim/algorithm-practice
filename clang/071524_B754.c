/**
 * https://atcoder.jp/contests/abc114/tasks/abc114_b
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MIN(x, y) (x) < (y) ? (x) : (y)
#define TARGET 753

int main( void ) {
	char S[ 11 ];
	int i, j;
	int len;
	int min = INT_MAX;
	int X;
	
	scanf( "%s", S );
	len = strlen( S );
	
	for( i = 0; i < len - 2; i++ ) {
		X = (S[ i+0 ] - '0') * 100 + (S[ i+1 ] - '0') * 10 + (S[ i+2 ] - '0');
		min = MIN( min, abs( TARGET - X ));
	}
	
	printf( "%d\n", min );
	
	return EXIT_SUCCESS;
}
