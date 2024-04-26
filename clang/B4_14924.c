//// https://www.acmicpc.net/problem/14924
#include <stdio.h>

int main(void)
{
	int S, T, D;
	scanf("%d %d %d", &S, &T, &D);
	int F = D/(S*2) * T;
	printf("%d\n", F);
	return 0;
}
