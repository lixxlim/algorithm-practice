/**
 * https://www.acmicpc.net/problem/23795
 */
#include <stdio.h>

int main( void )
{
	int m, sum = 0;
	scanf( "%d", &m );
	while( m > 0 )
	{
		sum += m;
		scanf( "%d", &m );
	}
	printf( "%d\n", sum );
	return 0;
}
