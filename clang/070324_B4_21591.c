/*
 * https://www.acmicpc.net/problem/21591
 */
#include <stdio.h>

int main( void )
{
	int wc, hc, ws, hs;
	scanf( "%d %d %d %d", &wc, &hc, &ws, &hs );
	printf( "%d\n", wc - ws > 1 && hc - hs > 1 );
	return 0;
}
