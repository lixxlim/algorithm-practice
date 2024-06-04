/*
 * https://www.acmicpc.net/problem/18330
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k, pay;
	scanf("%d\n%d", &n, &k);
	k += 60;
	printf( "%d\n", n > k ? (k * 1500) + ((n - k) * 3000) : n * 1500 );
	return EXIT_SUCCESS;
}
