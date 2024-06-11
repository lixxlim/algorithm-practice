/*
 * https://www.acmicpc.net/problem/19602
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int S, M, L;
	scanf( "%d\n%d\n%d", &S, &M, &L );
	puts( 1 * S + 2 * M + 3 * L >= 10 ? "happy" : "sad" );
	return EXIT_SUCCESS;
}
