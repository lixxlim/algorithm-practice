/**
 * https://www.acmicpc.net/problem/24072
 */
#include <stdio.h>

int main( void )
{
	int a, b, c;
	scanf( "%d %d %d", &a, &b, &c );
	puts( c >= a && c < b ? "1" : "0" );
	return 0;
}
