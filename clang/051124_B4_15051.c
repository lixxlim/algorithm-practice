/*
 * https://www.acmicpc.net/problem/15051
 */
#include <stdio.h>
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main(void)
{
	int a, b, c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	int f1 = b * 2 + c * 4;
	int f2 = a * 2 + c * 2;
	int f3 = a * 4 + b * 2;
	printf("%d\n", MIN(f1, MIN(f2, f3)));
	return 0;
}
