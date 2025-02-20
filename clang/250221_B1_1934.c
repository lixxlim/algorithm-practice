/**
 * https://www.acmicpc.net/problem/1934
 */
#include <stdio.h>
#include <stdbool.h>

int main( void )
{
	int t;
	int i, a, b;
	int big, sml, ans;
	
	scanf( "%d", &t );
	for( i = 0; i < t; i++ )
	{
		scanf( "%d %d", &a, &b );
		big = a >= b ? a : b;
		sml = a + b - big;
		ans = big;
		while( true )
		{
			if( ans % sml == 0 )
			{
				printf( "%d\n", ans );
				break;
			} else {
				ans += big;
			}
		}
	}
	
	return 0;
}
