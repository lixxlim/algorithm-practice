/*
 * https://www.acmicpc.net/problem/19698
 */
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (x) < (y) ? (x) : (y)

int main( void )
{
	int N, W, H, L;
	scanf( "%d %d %d %d", &N, &W, &H, &L );
	printf( "%d\n", MIN( ( W / L ) * ( H / L ), N ) );
	return EXIT_SUCCESS;
}
