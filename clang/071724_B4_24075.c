/**
 * https://www.acmicpc.net/problem/24075
 */
#include <stdio.h>

int main( void )
{
	int a, b;
	int max, min;
	
	scanf( "%d %d", &a, &b );
	max = a + b > a - b ? a + b : a - b;
	min = a + b < a - b ? a + b : a - b;
	
	printf( "%d\n%d\n", max, min ); 
	return 0;
}
