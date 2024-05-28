/*
 * https://www.acmicpc.net/problem/17362
 */
#include <stdio.h>

int list[8] = {1, 2, 3, 4, 5, 4, 3, 2};

int main(void)
{
	int n;
	scanf( "%d", &n );
	printf( "%d\n", list[ ( n - 1 ) % 8 ] );
	return 0;
}
