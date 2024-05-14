/*
 * https://www.acmicpc.net/problem/15474
 */
#include <stdio.h>

#define MIN(x, y) (x) < (y) ? (x) : (y)

int main(void)
{
	int N, A, B, C, D;
	scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
	int x = (((N - 1) / A) + 1) * B;
	int y = (((N - 1) / C) + 1) * D;
	printf("%d\n", MIN(x, y));
	return 0;
}
