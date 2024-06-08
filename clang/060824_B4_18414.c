/*
 * https://www.acmicpc.net/problem/18414
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int X, L, R;
	scanf("%d %d %d", &X, &L, &R);
	printf("%d\n", X < L ? L : X > R ? R : X);
	return EXIT_SUCCESS;
}
