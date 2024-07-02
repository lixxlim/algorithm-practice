/*
 * https://www.acmicpc.net/board/view/85745
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int A, P;
	scanf( "%d %d", &A, &P );
	A *= 7;
	P *= 13;
	puts( A == P ? "lika" : A > P ? "Axel" : "Petra" );
	return EXIT_SUCCESS;
}
