/**
 * https://www.acmicpc.net/problem/2581
 */
#include <stdio.h>

int* getPrimery( int from, int to );

int main( void )
{
	int M, N;
	int i, j;
	int sum, min;
	
	scanf( "%d\n%d", &M, &N );
	
	sum = 0, min = 0;
	for( i = M; i <= N; i++ )
	{
		for( j = 2; j < i; j++ )
		{
			if( i % j == 0 )
			{
				break;
			}
			if( j == i - 1 )
			{
				sum += i;
				if( min == 0 )
				{
					min = i;
				}
			}
		}
		if( i == 2 )
		{
			sum += i;
			min = i;
		}
	}
	if( min != 0 )
	{
		printf( "%d\n%d\n", sum, min );
	}
	else
	{
		printf("-1\n");
	}
	return 0;
}
