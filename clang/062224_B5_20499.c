/*
 * https://www.acmicpc.net/problem/20499
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int K, D, A;
	scanf("%d/%d/%d", &K, &D, &A);
	puts( D == 0 || K + A < D ? "hasu" : "gosu" );
	return EXIT_SUCCESS;
}
