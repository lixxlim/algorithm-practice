/*
 * https://www.acmicpc.net/problem/15128
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	long long a, A, b, B;
	scanf("%ld %ld %ld %ld", &a, &A, &b, &B);
	int tri = a * b % (A * B * 2) == 0;
	printf("%d\n", tri);
	return 0;
}
