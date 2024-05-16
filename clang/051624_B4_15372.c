/*
 * https://www.acmicpc.net/problem/15372
 */
#include  <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		long long N;
		scanf("%lld", &N);
		printf("%lld\n", N * N);
	}
	return 0;
}
