/*
 * https://www.acmicpc.net/problem/18408
 */
#include <stdio.h>

int main( void )
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a == b || a == c ? a : b);
	return 0;
}
