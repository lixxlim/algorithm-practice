/*
 * https://www.acmicpc.net/problem/20839
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char ret = 'E';
	int a, c, e, xA, xC, xE;
	scanf( "%d %d %d\n%d %d %d", &a, &c, &e, &xA, &xC, &xE );
	if( c <= xC )
	{
		if( a <= xA )
		{
			ret = 'A';
		}
		else if( ( ( a+1 ) / 2 ) <= xA )
		{
			ret = 'B';
		}
		else
		{
			ret = 'C';
		}
	}
	else if( ( ( c+1 ) / 2 ) <= xC )
	{
		ret = 'D';
	}
	printf("%c\n", ret);
	return EXIT_SUCCESS;
}
